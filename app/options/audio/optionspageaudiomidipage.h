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

#ifndef OPTIONSPAGEAUDIOMIDIPAGE_H
#define OPTIONSPAGEAUDIOMIDIPAGE_H

#include <QWidget>
#include <QComboBox>
#include <QProgressBar>
#include <QLabel>
#include <QGridLayout>
#include <QSpacerItem>
#include <QSizePolicy>
#include <QVariant>
#include <QTimer>

#include "prerequisites.h"

#if EPT_HAS_QTMIDI
#include <QtMidi/qmidisystemnotifier.h>
#include <QtMidi/qmidiautoconnector.h>
#endif

#include "core/audio/midi/midiadapter.h"

#include "../optionscontentswidgetinterface.h"

namespace options {

class PageAudioMidi
        : public QWidget
        , public ContentsWidgetInterface {
    Q_OBJECT
public:
#if EPT_HAS_QTMIDI
    PageAudioMidi(OptionsDialog *optionsDialog, QMidiAutoConnector *autoConnector);
#else
    PageAudioMidi(OptionsDialog *optionsDialog);
#endif

    void apply() override final;

signals:
    void inputEventStrenghUpdate(int value);
protected slots:
#if EPT_HAS_QTMIDI
    void updateMidiInputDevices();

    void inputDeviceAttached(const QMidiDeviceInfo &) {updateMidiInputDevices();}
    void inputDeviceDetached(const QMidiDeviceInfo &) {updateMidiInputDevices();}
    void inputDeviceCreated(const QMidiInput *d);
    void inputEventReceived(const QMidiMessage &m);
#endif

    void inputStrenghtUpdateTigger();

private:
#if EPT_HAS_QTMIDI
    QMidiAutoConnector *mAutoConnector;
#endif

    QComboBox *mDeviceSelection;
    QProgressBar * mInputEventStrengthBar;
};


}  // namespace options

#endif // OPTIONSPAGEAUDIOMIDIPAGE_H
