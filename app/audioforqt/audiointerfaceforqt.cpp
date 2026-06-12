#include "audiointerfaceforqt.h"

#include <QSettings>

#include "core/audio/pcmdevice.h"

const int AudioInterfaceForQt::DEFAULT_BUFFER_SIZE_MS(100);

AudioInterfaceForQt::AudioInterfaceForQt(QAudioDevice::Mode mode, QObject *parent)
    : QObject(parent)
    , mMode(mode)
    , mSettingsPrefix(mode == QAudioDevice::Input ? "audio/input/" : "audio/output/")
    , mPCMDevice(this)
{
    // these settings are fixed
    mFormat.setSampleFormat(QAudioFormat::Int16);

    // default values, these can be changed
    mFormat.setSampleRate(mode == QAudioDevice::Input ? 44100 : 22050);
    mFormat.setChannelCount(mode == QAudioDevice::Input ? 1 : 2);
}

void AudioInterfaceForQt::reinitialize(int samplingRate, int channelCount, QAudioDevice deviceInfo, int bufferSizeMS)
{
    exit();

    mDeviceInfo = deviceInfo;
    mFormat.setSampleRate(samplingRate);
    mFormat.setChannelCount(channelCount);

    // only necessary if default settings
    if (!deviceInfo.isFormatSupported(mFormat)) {
        LogW("Raw audio format not supported by backend, falling back to nearest supported");
        QAudioFormat preferred = deviceInfo.preferredFormat();
        preferred.setSampleFormat(QAudioFormat::Int16);
        preferred.setChannelCount(channelCount);
        mFormat = preferred;
        // update sampling rate, buffer type has to stay the same!
        if (not deviceInfo.isFormatSupported(mFormat))
        {
            LogW("Fallback failed. Probably there is no device available.");
            return;
        }

        if (mFormat.sampleFormat() != QAudioFormat::Int16) {
            LogW("Sample format not supported");
            return;
        }
    }

    QAudio::Error err = createDevice(mFormat, deviceInfo, bufferSizeMS);
    if (err != QAudio::NoError) {
        LogE("Error creating audio device with error %d", err);
        return;
    }

    LogI("Initialized audio using device: %s", getDeviceName().c_str());

    QSettings s;
    s.setValue(mSettingsPrefix + "samplerate", QVariant::fromValue(mFormat.sampleRate()));
    s.setValue(mSettingsPrefix + "channels", QVariant::fromValue(mFormat.channelCount()));
    s.setValue(mSettingsPrefix + "devicename", QVariant::fromValue(QString::fromUtf8(mDeviceInfo.description().toUtf8())));
    s.setValue(mSettingsPrefix + "buffersize", QVariant::fromValue(bufferSizeMS));
}

void AudioInterfaceForQt::init()
{
    QSettings s;

    // get device info
    mDeviceInfo = QAudioDevice();
    QString deviceName = s.value(mSettingsPrefix + "devicename").toString();
    if (deviceName.isEmpty()) {
        if (mMode == QAudioDevice::Input) {
            mDeviceInfo = QMediaDevices::defaultAudioInput();
        } else if (mMode == QAudioDevice::Output) {
            mDeviceInfo = QMediaDevices::defaultAudioOutput();
        }
    } else {
        QList<QAudioDevice> devices = (mMode == QAudioDevice::Input)
                ? QMediaDevices::audioInputs() : QMediaDevices::audioOutputs();
        for (QAudioDevice d : devices) {
            if (d.description() == deviceName) {
                mDeviceInfo = d;
                break;
            }
        }
    }

    if (mDeviceInfo.isNull()) {
        if (mMode == QAudioDevice::Input) {
            mDeviceInfo = QMediaDevices::defaultAudioInput();
        } else if (mMode == QAudioDevice::Output) {
            mDeviceInfo = QMediaDevices::defaultAudioOutput();
        }
    }

    // get format
    mFormat.setSampleRate(s.value(mSettingsPrefix + "samplerate", QVariant::fromValue(mFormat.sampleRate())).toInt());
    mFormat.setChannelCount(s.value(mSettingsPrefix + "channels", QVariant::fromValue(mFormat.channelCount())).toInt());

    // these settings are required
    if (mMode == QAudioDevice::Input) {
        mFormat.setChannelCount(1);
    }

    // buffer size
    int bufferSize = s.value(mSettingsPrefix + "buffersize", QVariant::fromValue(DEFAULT_BUFFER_SIZE_MS)).toInt();

    // initialize device
    reinitialize(mFormat.sampleRate(), mFormat.channelCount(), mDeviceInfo, bufferSize);
}

const std::string AudioInterfaceForQt::getDeviceName() const
{
    return mDeviceInfo.description().toStdString();
}

int AudioInterfaceForQt::getSamplingRate() const
{
    return mFormat.sampleRate();
}

int AudioInterfaceForQt::getChannelCount() const
{
    return mFormat.channelCount();
}

PCMDevice *AudioInterfaceForQt::getDevice() const
{
    return mPCMDevice.getDevice();
}

void AudioInterfaceForQt::setDevice(PCMDevice *device)
{
    mPCMDevice.setDevice(device);
}

int AudioInterfaceForQt::getBufferSizeMS() const
{
    QSettings s;
    return s.value(mSettingsPrefix + "buffersize", QVariant::fromValue(DEFAULT_BUFFER_SIZE_MS)).toInt();
}
