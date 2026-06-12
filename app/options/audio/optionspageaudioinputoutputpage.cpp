/*****************************************************************************
 * Copyright 2016 Haye Hinrichsen, Christoph Wick
 *
 * This file is part of Entropy Piano Tuner.
 *
 * Entropy Piano Tuner is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * Entropy Piano Tuner is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * Entropy Piano Tuner. If not, see http://www.gnu.org/licenses/.
 *****************************************************************************/

#include "optionspageaudioinputoutputpage.h"

#include <QMessageBox>
#include <QThread>

#include "audioforqt/audiointerfaceforqt.h"

#include "core/config.h"
#include "core/core.h"

#include "mainwindow/volumecontrollevel.h"
#include "mainwindow/mainwindow.h"
#include "widgets/progressoverlay.h"

namespace options {

// Helper: list of common sample rates supported by a device (Qt 6 only exposes a min/max range).
static QList<int> deviceSampleRates(const QAudioDevice &info) {
    QList<int> result;
    if (info.isNull()) {
        return result;
    }
    static const int candidates[] = {8000, 11025, 16000, 22050, 32000, 44100, 48000, 88200, 96000, 192000};
    const int minRate = info.minimumSampleRate();
    const int maxRate = info.maximumSampleRate();
    for (int rate : candidates) {
        if (rate >= minRate && rate <= maxRate) {
            result.append(rate);
        }
    }
    return result;
}

PageAudioInputOutput::PageAudioInputOutput(OptionsDialog *optionsDialog, QAudioDevice::Mode mode)
    : mOptionsDialog(optionsDialog),
      mAudioInterface(nullptr),
      mMode(mode) {

    ProgressOverlay *overlay = nullptr;
    if (mode == QAudioDevice::Input) {
        mAudioInterface = dynamic_cast<AudioInterfaceForQt*>(optionsDialog->getCore()->getAudioInput());
        overlay = new ProgressOverlay(this, tr("Loading input devices"), true);
    } else {
        mAudioInterface = dynamic_cast<AudioInterfaceForQt*>(optionsDialog->getCore()->getAudioPlayer());
        overlay = new ProgressOverlay(this, tr("Loading output devices"), true);
    }
    QObject::connect(this, SIGNAL(updateProgress(int)), overlay, SLOT(updatePercentage(int)));

    QGridLayout *inputLayout = new QGridLayout;
    this->setLayout(inputLayout);

    inputLayout->setColumnStretch(1, 1);

    mDeviceSelection = new QComboBox;
    mDeviceSelection->setInsertPolicy(QComboBox::InsertAlphabetically);
    // devices will be loaded in separate thread

    // select input device
    QPushButton *selectDefaultInputDeviceButton = new QPushButton(tr("Default"));
    inputLayout->addWidget(new QLabel(tr("Device")), 0, 0);
    inputLayout->addWidget(mDeviceSelection, 0, 1);
    inputLayout->addWidget(selectDefaultInputDeviceButton, 0, 2);

    // sampling rate
    QPushButton *selectDefaultSamplingRateButton = new QPushButton(tr("Default"));
    inputLayout->addWidget(new QLabel(tr("Sampling rate ")), 1, 0);
    inputLayout->addWidget(mSamplingRates = new QComboBox, 1, 1);
    inputLayout->addWidget(selectDefaultSamplingRateButton, 1, 2);

    // add open sound settings button
    if (mOptionsDialog->getMainWindow()->isSoundControlSupported()) {
        QPushButton *openSystemSettingsButton = new QPushButton(tr("Open system settings"));
        inputLayout->addWidget(openSystemSettingsButton, 10, 0);
        QObject::connect(openSystemSettingsButton, SIGNAL(clicked()), mOptionsDialog->getMainWindow(), SLOT(onOpenSoundControl()));
    }

    // add stretch
    inputLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding), 200, 0);



    // special widgets for output
    if (mMode == QAudioDevice::Output) {
        // Channels
        inputLayout->addWidget(new QLabel(tr("Channels")), 4, 0);

        mChannelsSelect = new QComboBox();
        mChannelsSelect->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);

        QPushButton *defaultChannels = new QPushButton(tr("Default"));
        QObject::connect(defaultChannels, SIGNAL(clicked(bool)), this, SLOT(onDefaultChannel()));

        inputLayout->addWidget(mChannelsSelect, 4, 1);
        inputLayout->addWidget(defaultChannels, 4, 2);

        // Buffer size
        inputLayout->addWidget(new QLabel(tr("Buffer size")), 5, 0);

        mBufferSizeEdit = new QSpinBox();
        mBufferSizeEdit->setRange(10, 5000);
        mBufferSizeEdit->setSingleStep(10);
        mBufferSizeEdit->setSuffix("ms");
        mBufferSizeEdit->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        mBufferSizeEdit->setValue(mAudioInterface->getBufferSizeMS());

        QPushButton *defaultBufferSize = new QPushButton(tr("Default"));
        QObject::connect(defaultBufferSize, SIGNAL(clicked(bool)), this, SLOT(onDefaultBufferSize()));

        inputLayout->addWidget(mBufferSizeEdit, 5, 1);
        inputLayout->addWidget(defaultBufferSize, 5, 2);


    }

    // set current values
    addDevice(mAudioInterface->getDeviceInfo());
    mDeviceSelection->setCurrentText(mAudioInterface->getDeviceInfo().description());
    onDeviceSelectionChanged(mDeviceSelection->currentIndex());
    mSamplingRates->setCurrentText(QString("%1").arg(mAudioInterface->getSamplingRate()));

    // connect widgets
    QObject::connect(mDeviceSelection, SIGNAL(currentIndexChanged(int)), this, SLOT(onDeviceSelectionChanged(int)));

    QObject::connect(selectDefaultInputDeviceButton, SIGNAL(clicked()), this, SLOT(onDefaultDevice()));
    QObject::connect(selectDefaultSamplingRateButton, SIGNAL(clicked()), this, SLOT(onDefaultSamplingRate()));

    // notify if changes are made
    QObject::connect(mDeviceSelection, SIGNAL(currentIndexChanged(int)), optionsDialog, SLOT(onChangesMade()));
    QObject::connect(mSamplingRates, SIGNAL(currentIndexChanged(int)), optionsDialog, SLOT(onChangesMade()));

    // special audio output
    if (mMode == QAudioDevice::Output) {
        mChannelsSelect->setCurrentText(QString::number(mAudioInterface->getChannelCount()));
        // notify if changes are made
        QObject::connect(mChannelsSelect, SIGNAL(currentIndexChanged(int)), optionsDialog, SLOT(onChangesMade()));
        QObject::connect(mBufferSizeEdit, SIGNAL(valueChanged(int)), optionsDialog, SLOT(onChangesMade()));
    }

    // start thread to load devices
    DeviceLoaderThread *t = new DeviceLoaderThread(this, mode);
    QObject::connect(t, SIGNAL(updateProgress(int)), overlay, SLOT(updatePercentage(int)));
    QObject::connect(t, SIGNAL(deviceReady(QAudioDevice)), this, SLOT(addDevice(QAudioDevice)));
    t->start();
    mDeviceLoader = t;
}

PageAudioInputOutput::~PageAudioInputOutput()
{
    mDeviceLoader->requestInterruption();
    mDeviceLoader->wait();
}

void PageAudioInputOutput::apply() {
    assert(mSamplingRates->currentIndex() != -1);
    assert(mSamplingRates->currentText().isEmpty() == false);

    //PCMDevice *writerInterfaceBackup = nullptr;
    if (mMode == QAudioDevice::Output) {
        //writerInterfaceBackup = dynamic_cast<AudioPlayerAdapter*>(mAudioBase)->getWriter();
    }

    QAudioDevice info(mDeviceSelection->currentData().value<QAudioDevice>());
    int bufferSizeMS = -1;
    int channels = 1;
    const int samplingRate = mSamplingRates->currentText().toInt();
    if (mMode == QAudioDevice::Output) {
        bufferSizeMS = mBufferSizeEdit->value();
        channels = mChannelsSelect->currentData().toInt();
    } else {
    }
    mAudioInterface->reinitialize(samplingRate, channels, info, bufferSizeMS);
    mAudioInterface->start();

    if (mMode == QAudioDevice::Output) {
        //dynamic_cast<AudioPlayerAdapter*>(mAudioBase)->setWriter(writerInterfaceBackup);
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // give waveform generator time
        if (mOptionsDialog->getCore()->getSoundGenerator()) {
            mOptionsDialog->getCore()->getSoundGenerator()->init();
        }
    }
}

void PageAudioInputOutput::onDeviceSelectionChanged(int row) {
    QAudioDevice info(mDeviceSelection->itemData(row).value<QAudioDevice>());

    mSamplingRates->clear();

    for (int rate : deviceSampleRates(info)) {
        if (rate < 9000) {
            // drop out 8000 sampling rate. Frequencies above 4000 Hz cant be recorded/played
            // elsewise. This is the uppermost key!
            continue;
        }
        mSamplingRates->addItem(QString("%1").arg(rate));
    }

    if (mMode == QAudioDevice::Output) {
        mChannelsSelect->clear();
        for (int channels = info.minimumChannelCount(); channels <= info.maximumChannelCount(); ++channels) {
            if (channels >= 1 && channels <= 2) {
                // only 2 and 1 is supported
                mChannelsSelect->addItem(QString::number(channels), channels);
            }
        }
        mChannelsSelect->setCurrentIndex(mChannelsSelect->count() - 1);
    }

    onDefaultSamplingRate();
}

void PageAudioInputOutput::onDefaultDevice() {
    if (mMode == QAudioDevice::Input) {
        mDeviceSelection->setCurrentText(QMediaDevices::defaultAudioInput().description());
    }
    else {
        mDeviceSelection->setCurrentText(QMediaDevices::defaultAudioOutput().description());
    }
    onDefaultSamplingRate();
}

void PageAudioInputOutput::onDefaultSamplingRate() {
    QAudioDevice info(mDeviceSelection->currentData().value<QAudioDevice>());
    if (info.description().isEmpty()) {
        // no device found
        mSamplingRates->setCurrentText(QString());
        return;
    }

    // use 22050/44100 as default sampling rate if the device supports it,
    // since the synthesizer cant handle too many samples
    // and we need at least 11025 samples for the fft.
    if (mMode == QAudioDevice::Output && deviceSampleRates(info).contains(22050)) {
        mSamplingRates->setCurrentText(QString("22050"));
    } else if (mMode == QAudioDevice::Input && deviceSampleRates(info).contains(44100)) {
        mSamplingRates->setCurrentText(QString("44100"));
    } else {
        // select prefered
        mSamplingRates->setCurrentText(QString("%1").arg(info.preferredFormat().sampleRate()));
        if (info.preferredFormat().sampleRate() < 9000) {
            QMessageBox::warning(this, tr("Warning"), tr("You need at least a sampling rate of %1 to record and play all keys.").arg(11025));
        }
    }
}

void PageAudioInputOutput::addDevice(QAudioDevice info) {
    if (mDeviceSelection->findText(info.description()) == -1) {
        mDeviceSelection->addItem(info.description(), QVariant::fromValue<QAudioDevice>(info));
    }
}

void PageAudioInputOutput::onDefaultChannel() {
    mChannelsSelect->setCurrentText(QString::number(2));
}

void PageAudioInputOutput::onDefaultBufferSize() {
    mBufferSizeEdit->setValue(AudioInterfaceForQt::DEFAULT_BUFFER_SIZE_MS);
}

DeviceLoaderThread::DeviceLoaderThread(QObject *parent, QAudioDevice::Mode mode)
    : QThread(parent)
    , mMode(mode)
{
}

void DeviceLoaderThread::run() {
    QList<QAudioDevice> deviceInfos((mMode == QAudioDevice::Input)
            ? QMediaDevices::audioInputs() : QMediaDevices::audioOutputs());
    int progress = 0;
    for (QAudioDevice info : deviceInfos) {
        if (isInterruptionRequested()) {
            break;
        }
        bool isSupported = info.isFormatSupported(info.preferredFormat());
        emit updateProgress(progress);
        progress += 100 / deviceInfos.size();
        if (!isSupported) {
            // no supported formats, dont list
            LogI("%s is not supported.", info.description().toStdString().c_str());
            continue;
        }

        LogI("%s is supported.", info.description().toStdString().c_str());

        //mDeviceSelection->addItem(info.deviceName(), QVariant::fromValue<QAudioDeviceInfo>(info));
        emit deviceReady(info);
    }

    emit updateProgress(100);
}

}  // namespace options
