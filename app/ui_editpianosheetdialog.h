/********************************************************************************
** Form generated from reading UI file 'editpianosheetdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPIANOSHEETDIALOG_H
#define UI_EDITPIANOSHEETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditPianoSheetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *pianoOperatingSiteInformation;
    QFormLayout *pianoOperatingSiteInformationLayout;
    QLabel *label_5;
    QLineEdit *tuningLocationLineEdit;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *timeOfTuningDateTimeEdit;
    QPushButton *timeOfTuningNowButton;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *concertPitchSpinBox;
    QPushButton *defaultConcertPitchButton;
    QGroupBox *pianoManufacturerInformation;
    QFormLayout *pianoManufacturerInformationLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *serialNumberLineEdit;
    QLabel *label_3;
    QDateEdit *yearEdit;
    QLabel *label_4;
    QLineEdit *productionLocationLineEdit;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *numberOfKeysSpinBox;
    QPushButton *defaultNumberOfKeysButton;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *keyNumberOfASpinBox;
    QPushButton *defaultKeyNumberOfAButton;
    QLabel *label_10;
    QComboBox *pianoType;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *keysOnBassBridgeSpinBox;
    QPushButton *defaultKeysOnBassBridgeButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditPianoSheetDialog)
    {
        if (EditPianoSheetDialog->objectName().isEmpty())
            EditPianoSheetDialog->setObjectName("EditPianoSheetDialog");
        EditPianoSheetDialog->resize(532, 513);
        verticalLayout = new QVBoxLayout(EditPianoSheetDialog);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(EditPianoSheetDialog);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 512, 462));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pianoOperatingSiteInformation = new QGroupBox(scrollAreaWidgetContents);
        pianoOperatingSiteInformation->setObjectName("pianoOperatingSiteInformation");
        pianoOperatingSiteInformationLayout = new QFormLayout(pianoOperatingSiteInformation);
        pianoOperatingSiteInformationLayout->setObjectName("pianoOperatingSiteInformationLayout");
        pianoOperatingSiteInformationLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_5 = new QLabel(pianoOperatingSiteInformation);
        label_5->setObjectName("label_5");

        pianoOperatingSiteInformationLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_5);

        tuningLocationLineEdit = new QLineEdit(pianoOperatingSiteInformation);
        tuningLocationLineEdit->setObjectName("tuningLocationLineEdit");

        pianoOperatingSiteInformationLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, tuningLocationLineEdit);

        label_6 = new QLabel(pianoOperatingSiteInformation);
        label_6->setObjectName("label_6");

        pianoOperatingSiteInformationLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        timeOfTuningDateTimeEdit = new QDateTimeEdit(pianoOperatingSiteInformation);
        timeOfTuningDateTimeEdit->setObjectName("timeOfTuningDateTimeEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeOfTuningDateTimeEdit->sizePolicy().hasHeightForWidth());
        timeOfTuningDateTimeEdit->setSizePolicy(sizePolicy);
        timeOfTuningDateTimeEdit->setProperty("showGroupSeparator", QVariant(false));

        horizontalLayout->addWidget(timeOfTuningDateTimeEdit);

        timeOfTuningNowButton = new QPushButton(pianoOperatingSiteInformation);
        timeOfTuningNowButton->setObjectName("timeOfTuningNowButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeOfTuningNowButton->sizePolicy().hasHeightForWidth());
        timeOfTuningNowButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(timeOfTuningNowButton);


        pianoOperatingSiteInformationLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        label_7 = new QLabel(pianoOperatingSiteInformation);
        label_7->setObjectName("label_7");

        pianoOperatingSiteInformationLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        concertPitchSpinBox = new QDoubleSpinBox(pianoOperatingSiteInformation);
        concertPitchSpinBox->setObjectName("concertPitchSpinBox");
        sizePolicy.setHeightForWidth(concertPitchSpinBox->sizePolicy().hasHeightForWidth());
        concertPitchSpinBox->setSizePolicy(sizePolicy);
        concertPitchSpinBox->setDecimals(1);
        concertPitchSpinBox->setMinimum(400.000000000000000);
        concertPitchSpinBox->setMaximum(452.000000000000000);
        concertPitchSpinBox->setSingleStep(0.100000000000000);
        concertPitchSpinBox->setValue(440.000000000000000);

        horizontalLayout_2->addWidget(concertPitchSpinBox);

        defaultConcertPitchButton = new QPushButton(pianoOperatingSiteInformation);
        defaultConcertPitchButton->setObjectName("defaultConcertPitchButton");

        horizontalLayout_2->addWidget(defaultConcertPitchButton);


        pianoOperatingSiteInformationLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);


        verticalLayout_2->addWidget(pianoOperatingSiteInformation);

        pianoManufacturerInformation = new QGroupBox(scrollAreaWidgetContents);
        pianoManufacturerInformation->setObjectName("pianoManufacturerInformation");
        pianoManufacturerInformationLayout = new QFormLayout(pianoManufacturerInformation);
        pianoManufacturerInformationLayout->setObjectName("pianoManufacturerInformationLayout");
        pianoManufacturerInformationLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(pianoManufacturerInformation);
        label->setObjectName("label");

        pianoManufacturerInformationLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        nameLineEdit = new QLineEdit(pianoManufacturerInformation);
        nameLineEdit->setObjectName("nameLineEdit");

        pianoManufacturerInformationLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nameLineEdit);

        label_2 = new QLabel(pianoManufacturerInformation);
        label_2->setObjectName("label_2");

        pianoManufacturerInformationLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        serialNumberLineEdit = new QLineEdit(pianoManufacturerInformation);
        serialNumberLineEdit->setObjectName("serialNumberLineEdit");

        pianoManufacturerInformationLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, serialNumberLineEdit);

        label_3 = new QLabel(pianoManufacturerInformation);
        label_3->setObjectName("label_3");

        pianoManufacturerInformationLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_3);

        yearEdit = new QDateEdit(pianoManufacturerInformation);
        yearEdit->setObjectName("yearEdit");
        sizePolicy.setHeightForWidth(yearEdit->sizePolicy().hasHeightForWidth());
        yearEdit->setSizePolicy(sizePolicy);
        yearEdit->setCurrentSection(QDateTimeEdit::YearSection);
        yearEdit->setDisplayFormat(QString::fromUtf8("yyyy"));
        yearEdit->setCalendarPopup(false);

        pianoManufacturerInformationLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, yearEdit);

        label_4 = new QLabel(pianoManufacturerInformation);
        label_4->setObjectName("label_4");

        pianoManufacturerInformationLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_4);

        productionLocationLineEdit = new QLineEdit(pianoManufacturerInformation);
        productionLocationLineEdit->setObjectName("productionLocationLineEdit");

        pianoManufacturerInformationLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, productionLocationLineEdit);

        label_8 = new QLabel(pianoManufacturerInformation);
        label_8->setObjectName("label_8");

        pianoManufacturerInformationLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        numberOfKeysSpinBox = new QSpinBox(pianoManufacturerInformation);
        numberOfKeysSpinBox->setObjectName("numberOfKeysSpinBox");
        sizePolicy.setHeightForWidth(numberOfKeysSpinBox->sizePolicy().hasHeightForWidth());
        numberOfKeysSpinBox->setSizePolicy(sizePolicy);
        numberOfKeysSpinBox->setMinimum(10);
        numberOfKeysSpinBox->setValue(88);

        horizontalLayout_3->addWidget(numberOfKeysSpinBox);

        defaultNumberOfKeysButton = new QPushButton(pianoManufacturerInformation);
        defaultNumberOfKeysButton->setObjectName("defaultNumberOfKeysButton");

        horizontalLayout_3->addWidget(defaultNumberOfKeysButton);


        pianoManufacturerInformationLayout->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        label_9 = new QLabel(pianoManufacturerInformation);
        label_9->setObjectName("label_9");

        pianoManufacturerInformationLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        keyNumberOfASpinBox = new QSpinBox(pianoManufacturerInformation);
        keyNumberOfASpinBox->setObjectName("keyNumberOfASpinBox");
        sizePolicy.setHeightForWidth(keyNumberOfASpinBox->sizePolicy().hasHeightForWidth());
        keyNumberOfASpinBox->setSizePolicy(sizePolicy);
        keyNumberOfASpinBox->setMinimum(10);
        keyNumberOfASpinBox->setDisplayIntegerBase(10);

        horizontalLayout_4->addWidget(keyNumberOfASpinBox);

        defaultKeyNumberOfAButton = new QPushButton(pianoManufacturerInformation);
        defaultKeyNumberOfAButton->setObjectName("defaultKeyNumberOfAButton");

        horizontalLayout_4->addWidget(defaultKeyNumberOfAButton);


        pianoManufacturerInformationLayout->setLayout(6, QFormLayout::ItemRole::FieldRole, horizontalLayout_4);

        label_10 = new QLabel(pianoManufacturerInformation);
        label_10->setObjectName("label_10");

        pianoManufacturerInformationLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_10);

        pianoType = new QComboBox(pianoManufacturerInformation);
        pianoType->addItem(QString());
        pianoType->addItem(QString());
        pianoType->setObjectName("pianoType");
        sizePolicy.setHeightForWidth(pianoType->sizePolicy().hasHeightForWidth());
        pianoType->setSizePolicy(sizePolicy);

        pianoManufacturerInformationLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, pianoType);

        label_11 = new QLabel(pianoManufacturerInformation);
        label_11->setObjectName("label_11");

        pianoManufacturerInformationLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        keysOnBassBridgeSpinBox = new QSpinBox(pianoManufacturerInformation);
        keysOnBassBridgeSpinBox->setObjectName("keysOnBassBridgeSpinBox");
        sizePolicy.setHeightForWidth(keysOnBassBridgeSpinBox->sizePolicy().hasHeightForWidth());
        keysOnBassBridgeSpinBox->setSizePolicy(sizePolicy);
        keysOnBassBridgeSpinBox->setValue(28);

        horizontalLayout_5->addWidget(keysOnBassBridgeSpinBox);

        defaultKeysOnBassBridgeButton = new QPushButton(pianoManufacturerInformation);
        defaultKeysOnBassBridgeButton->setObjectName("defaultKeysOnBassBridgeButton");

        horizontalLayout_5->addWidget(defaultKeysOnBassBridgeButton);


        pianoManufacturerInformationLayout->setLayout(7, QFormLayout::ItemRole::FieldRole, horizontalLayout_5);


        verticalLayout_2->addWidget(pianoManufacturerInformation);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(EditPianoSheetDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(scrollArea, concertPitchSpinBox);
        QWidget::setTabOrder(concertPitchSpinBox, defaultConcertPitchButton);
        QWidget::setTabOrder(defaultConcertPitchButton, tuningLocationLineEdit);
        QWidget::setTabOrder(tuningLocationLineEdit, timeOfTuningDateTimeEdit);
        QWidget::setTabOrder(timeOfTuningDateTimeEdit, timeOfTuningNowButton);
        QWidget::setTabOrder(timeOfTuningNowButton, nameLineEdit);
        QWidget::setTabOrder(nameLineEdit, serialNumberLineEdit);
        QWidget::setTabOrder(serialNumberLineEdit, yearEdit);
        QWidget::setTabOrder(yearEdit, productionLocationLineEdit);
        QWidget::setTabOrder(productionLocationLineEdit, numberOfKeysSpinBox);
        QWidget::setTabOrder(numberOfKeysSpinBox, defaultNumberOfKeysButton);
        QWidget::setTabOrder(defaultNumberOfKeysButton, keyNumberOfASpinBox);
        QWidget::setTabOrder(keyNumberOfASpinBox, defaultKeyNumberOfAButton);

        retranslateUi(EditPianoSheetDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditPianoSheetDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditPianoSheetDialog, qOverload<>(&QDialog::reject));
        QObject::connect(timeOfTuningNowButton, SIGNAL(clicked()), EditPianoSheetDialog, SLOT(onSetTuningTimeToNow()));
        QObject::connect(numberOfKeysSpinBox, SIGNAL(valueChanged(int)), EditPianoSheetDialog, SLOT(onNumberOfKeysChanged(int)));
        QObject::connect(defaultConcertPitchButton, SIGNAL(clicked()), EditPianoSheetDialog, SLOT(onDefaultConcertPitch()));
        QObject::connect(defaultKeyNumberOfAButton, SIGNAL(clicked()), EditPianoSheetDialog, SLOT(onDefaultKeyNumberOfA()));
        QObject::connect(defaultNumberOfKeysButton, SIGNAL(clicked()), EditPianoSheetDialog, SLOT(onDefaultNumberOfKeys()));
        QObject::connect(defaultKeysOnBassBridgeButton, SIGNAL(clicked()), EditPianoSheetDialog, SLOT(onDefaultKeysOnBassBridge()));

        QMetaObject::connectSlotsByName(EditPianoSheetDialog);
    } // setupUi

    void retranslateUi(QDialog *EditPianoSheetDialog)
    {
        EditPianoSheetDialog->setWindowTitle(QCoreApplication::translate("EditPianoSheetDialog", "Piano data sheet", nullptr));
        pianoOperatingSiteInformation->setTitle(QCoreApplication::translate("EditPianoSheetDialog", "Piano operating site information", nullptr));
        label_5->setText(QCoreApplication::translate("EditPianoSheetDialog", "Tuning location", nullptr));
        label_6->setText(QCoreApplication::translate("EditPianoSheetDialog", "Time of tuning", nullptr));
        timeOfTuningNowButton->setText(QCoreApplication::translate("EditPianoSheetDialog", "Now", nullptr));
        label_7->setText(QCoreApplication::translate("EditPianoSheetDialog", "Concert pitch", nullptr));
        concertPitchSpinBox->setPrefix(QCoreApplication::translate("EditPianoSheetDialog", "A", nullptr));
        defaultConcertPitchButton->setText(QCoreApplication::translate("EditPianoSheetDialog", "Default", nullptr));
        pianoManufacturerInformation->setTitle(QCoreApplication::translate("EditPianoSheetDialog", "Piano manufacturer information", nullptr));
        label->setText(QCoreApplication::translate("EditPianoSheetDialog", "Piano name", nullptr));
        label_2->setText(QCoreApplication::translate("EditPianoSheetDialog", "Serial number", nullptr));
        label_3->setText(QCoreApplication::translate("EditPianoSheetDialog", "Manufaction year", nullptr));
        label_4->setText(QCoreApplication::translate("EditPianoSheetDialog", "Production location", nullptr));
        label_8->setText(QCoreApplication::translate("EditPianoSheetDialog", "Number of keys", nullptr));
        defaultNumberOfKeysButton->setText(QCoreApplication::translate("EditPianoSheetDialog", "Default", nullptr));
        label_9->setText(QCoreApplication::translate("EditPianoSheetDialog", "Key number of A", nullptr));
        defaultKeyNumberOfAButton->setText(QCoreApplication::translate("EditPianoSheetDialog", "Default", nullptr));
        label_10->setText(QCoreApplication::translate("EditPianoSheetDialog", "Piano type", nullptr));
        pianoType->setItemText(0, QCoreApplication::translate("EditPianoSheetDialog", "Grand", nullptr));
        pianoType->setItemText(1, QCoreApplication::translate("EditPianoSheetDialog", "Upright", nullptr));

        label_11->setText(QCoreApplication::translate("EditPianoSheetDialog", "Keys on bass bridge", nullptr));
        defaultKeysOnBassBridgeButton->setText(QCoreApplication::translate("EditPianoSheetDialog", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPianoSheetDialog: public Ui_EditPianoSheetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPIANOSHEETDIALOG_H
