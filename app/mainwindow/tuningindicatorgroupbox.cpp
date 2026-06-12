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

#include "tuningindicatorgroupbox.h"
#include <cmath>
#include <QHBoxLayout>
#include <QLabel>
#include <QVBoxLayout>

#include "core/analyzers/fftanalyzererrorcodes.h"


TuningIndicatorGroupBox::TuningIndicatorGroupBox(QWidget *parent) :
    DisplaySizeDependingGroupBox(parent, new QHBoxLayout, toFlag(MODE_TUNING))
{
    setTitle(tr("Tuning"));
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    QHBoxLayout *mainLayout = qobject_cast<QHBoxLayout*>(mMainWidgetContainer->layout());

    graph = new TuningIndicatorView(this);
    mainLayout->addWidget(graph);

    QVBoxLayout *readoutLayout = new QVBoxLayout;
    readoutLayout->setContentsMargins(4, 0, 0, 0);
    mainLayout->addLayout(readoutLayout);

    mCentsLabel = new QLabel("-");
    mCentsLabel->setAlignment(Qt::AlignCenter);
    QFont centsFont;
    centsFont.setPointSize(22);
    centsFont.setBold(true);
    mCentsLabel->setFont(centsFont);
    mCentsLabel->setMinimumWidth(mCentsLabel->fontMetrics().horizontalAdvance("-000 ct"));
    readoutLayout->addWidget(mCentsLabel);

    mDirectionLabel = new QLabel(tr("Play selected key"));
    mDirectionLabel->setAlignment(Qt::AlignCenter);
    mDirectionLabel->setWordWrap(true);
    readoutLayout->addWidget(mDirectionLabel);

    readoutLayout->addStretch();
}

void TuningIndicatorGroupBox::setDeviation(FrequencyDetectionResult result)
{
    if (!result || result->hasError()) {
        clearDeviation();
        if (result && result->error == FFTAnalyzerErrorTypes::ERR_NO_PEAK_AMPLITUDE) {
            mDirectionLabel->setText(tr("No stable peak"));
        }
        return;
    }

    const int cents = result->deviationInCents;
    mCentsLabel->setText(tr("%1 ct").arg(cents));

    if (std::abs(cents) <= 2) {
        mDirectionLabel->setText(tr("In tune"));
        mCentsLabel->setStyleSheet("color: #167a3a;");
    } else if (cents > 0) {
        mDirectionLabel->setText(tr("Lower pitch"));
        mCentsLabel->setStyleSheet("color: #b45700;");
    } else {
        mDirectionLabel->setText(tr("Raise pitch"));
        mCentsLabel->setStyleSheet("color: #b45700;");
    }
}

void TuningIndicatorGroupBox::clearDeviation()
{
    mCentsLabel->setText("-");
    mCentsLabel->setStyleSheet("");
    mDirectionLabel->setText(tr("Play selected key"));
}
