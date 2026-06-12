/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawers/fourierspectrumgraph.h"
#include "drawers/tuningcurvegraph.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionOpen_sound_control;
    QAction *actionSave_As;
    QAction *action_New;
    QAction *actionEdit_piano_data_sheet;
    QAction *actionShare;
    QAction *actionView_log;
    QAction *actionOptions;
    QAction *actionClear_pitches;
    QAction *actionManual;
    QAction *actionTutorial;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *controlLayout;
    QSplitter *graphSplitter;
    TuningCurveGraph *tuningCurveGraphicsView;
    FourierSpectrumGraph *fourierSpectrumGraphics;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *modeToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1111, 518);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/media/images/icon_256x256.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionOpen_sound_control = new QAction(MainWindow);
        actionOpen_sound_control->setObjectName("actionOpen_sound_control");
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        action_New = new QAction(MainWindow);
        action_New->setObjectName("action_New");
        actionEdit_piano_data_sheet = new QAction(MainWindow);
        actionEdit_piano_data_sheet->setObjectName("actionEdit_piano_data_sheet");
        actionShare = new QAction(MainWindow);
        actionShare->setObjectName("actionShare");
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("document-send");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        actionShare->setIcon(icon1);
        actionShare->setVisible(false);
        actionView_log = new QAction(MainWindow);
        actionView_log->setObjectName("actionView_log");
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName("actionOptions");
        actionClear_pitches = new QAction(MainWindow);
        actionClear_pitches->setObjectName("actionClear_pitches");
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName("actionManual");
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName("actionTutorial");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        controlLayout = new QHBoxLayout();
        controlLayout->setSpacing(6);
        controlLayout->setObjectName("controlLayout");

        verticalLayout->addLayout(controlLayout);

        graphSplitter = new QSplitter(centralWidget);
        graphSplitter->setObjectName("graphSplitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(graphSplitter->sizePolicy().hasHeightForWidth());
        graphSplitter->setSizePolicy(sizePolicy);
        graphSplitter->setOrientation(Qt::Vertical);
        graphSplitter->setChildrenCollapsible(false);
        tuningCurveGraphicsView = new TuningCurveGraph(graphSplitter);
        tuningCurveGraphicsView->setObjectName("tuningCurveGraphicsView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tuningCurveGraphicsView->sizePolicy().hasHeightForWidth());
        tuningCurveGraphicsView->setSizePolicy(sizePolicy1);
        graphSplitter->addWidget(tuningCurveGraphicsView);
        fourierSpectrumGraphics = new FourierSpectrumGraph(graphSplitter);
        fourierSpectrumGraphics->setObjectName("fourierSpectrumGraphics");
        sizePolicy1.setHeightForWidth(fourierSpectrumGraphics->sizePolicy().hasHeightForWidth());
        fourierSpectrumGraphics->setSizePolicy(sizePolicy1);
        graphSplitter->addWidget(fourierSpectrumGraphics);

        verticalLayout->addWidget(graphSplitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1111, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName("menuTools");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menuBar);
        modeToolBar = new QToolBar(MainWindow);
        modeToolBar->setObjectName("modeToolBar");
        modeToolBar->setMovable(false);
        modeToolBar->setAllowedAreas(Qt::LeftToolBarArea);
        MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, modeToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_New);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionShare);
        menuFile->addAction(actionExit);
        menuTools->addAction(actionEdit_piano_data_sheet);
        menuTools->addAction(actionClear_pitches);
        menuTools->addSeparator();
        menuTools->addAction(actionOptions);
        menuHelp->addAction(actionTutorial);
        menuHelp->addAction(actionManual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionView_log);
        menuHelp->addSeparator();
        menuHelp->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(actionOpen, SIGNAL(triggered()), MainWindow, SLOT(onFileOpen()));
        QObject::connect(actionSave, SIGNAL(triggered()), MainWindow, SLOT(onFileSave()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(onAbout()));
        QObject::connect(actionOpen_sound_control, SIGNAL(triggered()), MainWindow, SLOT(onOpenSoundControl()));
        QObject::connect(actionSave_As, SIGNAL(triggered()), MainWindow, SLOT(onFileSaveAs()));
        QObject::connect(action_New, SIGNAL(triggered()), MainWindow, SLOT(onFileNew()));
        QObject::connect(actionEdit_piano_data_sheet, SIGNAL(triggered()), MainWindow, SLOT(onEditPianoDataSheet()));
        QObject::connect(actionShare, SIGNAL(triggered()), MainWindow, SLOT(onFileShare()));
        QObject::connect(actionView_log, SIGNAL(triggered()), MainWindow, SLOT(onViewLog()));
        QObject::connect(actionOptions, SIGNAL(triggered()), MainWindow, SLOT(onOptions()));
        QObject::connect(actionClear_pitches, SIGNAL(triggered()), MainWindow, SLOT(onResetRecording()));
        QObject::connect(actionManual, SIGNAL(triggered()), MainWindow, SLOT(onManual()));
        QObject::connect(actionTutorial, SIGNAL(triggered()), MainWindow, SLOT(onTutorial()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Entropy piano tuner", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionOpen_sound_control->setText(QCoreApplication::translate("MainWindow", "Open sound control", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save &As", nullptr));
        action_New->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
        actionEdit_piano_data_sheet->setText(QCoreApplication::translate("MainWindow", "&Edit piano data sheet", nullptr));
        actionShare->setText(QCoreApplication::translate("MainWindow", "Share", nullptr));
        actionView_log->setText(QCoreApplication::translate("MainWindow", "View log", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "&Options", nullptr));
        actionClear_pitches->setText(QCoreApplication::translate("MainWindow", "&Clear pitch markers", nullptr));
#if QT_CONFIG(tooltip)
        actionClear_pitches->setToolTip(QCoreApplication::translate("MainWindow", "Clear pitch markers", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManual->setText(QCoreApplication::translate("MainWindow", "Manual", nullptr));
        actionTutorial->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
#if QT_CONFIG(whatsthis)
        tuningCurveGraphicsView->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This windows displays the tuning curve.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        fourierSpectrumGraphics->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This window displays the recorded spectrum of a single note. Bars will indicate the peaks that were found during the analysis.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
