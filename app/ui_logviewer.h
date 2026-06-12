/********************************************************************************
** Form generated from reading UI file 'logviewer.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGVIEWER_H
#define UI_LOGVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogViewer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *logSelectionComboBox;
    QToolButton *copyToClipboardButton;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogViewer)
    {
        if (LogViewer->objectName().isEmpty())
            LogViewer->setObjectName("LogViewer");
        LogViewer->resize(609, 383);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogViewer->sizePolicy().hasHeightForWidth());
        LogViewer->setSizePolicy(sizePolicy);
        LogViewer->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(LogViewer);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LogViewer);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logSelectionComboBox = new QComboBox(LogViewer);
        logSelectionComboBox->addItem(QString());
        logSelectionComboBox->addItem(QString());
        logSelectionComboBox->setObjectName("logSelectionComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logSelectionComboBox->sizePolicy().hasHeightForWidth());
        logSelectionComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(logSelectionComboBox);

        copyToClipboardButton = new QToolButton(LogViewer);
        copyToClipboardButton->setObjectName("copyToClipboardButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/media/icons/edit-copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        copyToClipboardButton->setIcon(icon);
        copyToClipboardButton->setIconSize(QSize(32, 32));
        copyToClipboardButton->setAutoRaise(true);

        horizontalLayout->addWidget(copyToClipboardButton);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(LogViewer);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Helvetica Neue DeskInterface'; font-size:13pt;\"><br /></p></body></html>"));
        textBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(LogViewer);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(textBrowser, copyToClipboardButton);

        retranslateUi(LogViewer);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogViewer, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogViewer, qOverload<>(&QDialog::reject));
        QObject::connect(copyToClipboardButton, SIGNAL(clicked()), LogViewer, SLOT(copyToClipboard()));
        QObject::connect(logSelectionComboBox, SIGNAL(currentIndexChanged(int)), LogViewer, SLOT(logIndexChanged(int)));

        QMetaObject::connectSlotsByName(LogViewer);
    } // setupUi

    void retranslateUi(QDialog *LogViewer)
    {
        LogViewer->setWindowTitle(QCoreApplication::translate("LogViewer", "Log", nullptr));
        label->setText(QCoreApplication::translate("LogViewer", "Log", nullptr));
        logSelectionComboBox->setItemText(0, QCoreApplication::translate("LogViewer", "Current log", nullptr));
        logSelectionComboBox->setItemText(1, QCoreApplication::translate("LogViewer", "Previous log", nullptr));

#if QT_CONFIG(tooltip)
        copyToClipboardButton->setToolTip(QCoreApplication::translate("LogViewer", "Copy the contents of the log to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToClipboardButton->setText(QCoreApplication::translate("LogViewer", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogViewer: public Ui_LogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGVIEWER_H
