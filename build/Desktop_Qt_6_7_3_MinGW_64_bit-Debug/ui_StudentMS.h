/********************************************************************************
** Form generated from reading UI file 'StudentMS.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMS_H
#define UI_STUDENTMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMS
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionAdd;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionAlter;
    QAction *actionDelete;
    QAction *actionSortID;
    QAction *actionSortName;
    QAction *actionPrint;
    QAction *actionSaveAs;
    QAction *actionTabBar;
    QAction *actionWindow;
    QAction *actionSascadeSubWindows;
    QAction *actionTileSubWindows;
    QAction *actionSort;
    QAction *actionFilter;
    QAction *actionToolbar;
    QAction *actionStatus;
    QAction *actionOriginQss;
    QAction *actionQssBlue;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_6;
    QMenu *menu_3;
    QMenu *menu_7;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *StudentMS)
    {
        if (StudentMS->objectName().isEmpty())
            StudentMS->setObjectName("StudentMS");
        StudentMS->resize(1062, 591);
        actionNew = new QAction(StudentMS);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(StudentMS);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(StudentMS);
        actionClose->setObjectName("actionClose");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClose->setIcon(icon2);
        actionAdd = new QAction(StudentMS);
        actionAdd->setObjectName("actionAdd");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAdd->setIcon(icon3);
        actionAbout = new QAction(StudentMS);
        actionAbout->setObjectName("actionAbout");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon4);
        actionSave = new QAction(StudentMS);
        actionSave->setObjectName("actionSave");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icon/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon5);
        actionAlter = new QAction(StudentMS);
        actionAlter->setObjectName("actionAlter");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icon/alert.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAlter->setIcon(icon6);
        actionDelete = new QAction(StudentMS);
        actionDelete->setObjectName("actionDelete");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icon/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDelete->setIcon(icon7);
        actionSortID = new QAction(StudentMS);
        actionSortID->setObjectName("actionSortID");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icon/sort.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSortID->setIcon(icon8);
        actionSortName = new QAction(StudentMS);
        actionSortName->setObjectName("actionSortName");
        actionSortName->setIcon(icon8);
        actionPrint = new QAction(StudentMS);
        actionPrint->setObjectName("actionPrint");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/icon/print.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPrint->setIcon(icon9);
        actionSaveAs = new QAction(StudentMS);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/icon/saveAs.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAs->setIcon(icon10);
        actionTabBar = new QAction(StudentMS);
        actionTabBar->setObjectName("actionTabBar");
        actionWindow = new QAction(StudentMS);
        actionWindow->setObjectName("actionWindow");
        actionSascadeSubWindows = new QAction(StudentMS);
        actionSascadeSubWindows->setObjectName("actionSascadeSubWindows");
        actionTileSubWindows = new QAction(StudentMS);
        actionTileSubWindows->setObjectName("actionTileSubWindows");
        actionSort = new QAction(StudentMS);
        actionSort->setObjectName("actionSort");
        actionSort->setIcon(icon8);
        actionFilter = new QAction(StudentMS);
        actionFilter->setObjectName("actionFilter");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/icon/search .png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFilter->setIcon(icon11);
        actionToolbar = new QAction(StudentMS);
        actionToolbar->setObjectName("actionToolbar");
        actionToolbar->setCheckable(true);
        actionStatus = new QAction(StudentMS);
        actionStatus->setObjectName("actionStatus");
        actionStatus->setCheckable(true);
        actionOriginQss = new QAction(StudentMS);
        actionOriginQss->setObjectName("actionOriginQss");
        actionQssBlue = new QAction(StudentMS);
        actionQssBlue->setObjectName("actionQssBlue");
        centralWidget = new QWidget(StudentMS);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName("mdiArea");

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        StudentMS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StudentMS);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1062, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        menu_6 = new QMenu(menu_2);
        menu_6->setObjectName("menu_6");
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName("menu_3");
        menu_7 = new QMenu(menu_3);
        menu_7->setObjectName("menu_7");
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName("menu_5");
        StudentMS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StudentMS);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setIconSize(QSize(25, 25));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        StudentMS->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StudentMS);
        statusBar->setObjectName("statusBar");
        StudentMS->setStatusBar(statusBar);
        toolBar = new QToolBar(StudentMS);
        toolBar->setObjectName("toolBar");
        toolBar->setIconSize(QSize(25, 25));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        StudentMS->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionClose);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addAction(actionPrint);
        menu_2->addAction(actionAdd);
        menu_2->addAction(actionAlter);
        menu_2->addAction(actionDelete);
        menu_2->addAction(menu_6->menuAction());
        menu_6->addAction(actionSortID);
        menu_6->addAction(actionSortName);
        menu_3->addAction(actionToolbar);
        menu_3->addAction(actionStatus);
        menu_3->addAction(menu_7->menuAction());
        menu_7->addAction(actionOriginQss);
        menu_7->addAction(actionQssBlue);
        menu_4->addAction(actionTabBar);
        menu_4->addAction(actionWindow);
        menu_4->addAction(actionSascadeSubWindows);
        menu_4->addAction(actionTileSubWindows);
        menu_5->addAction(actionAbout);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addAction(actionAbout);
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionAlter);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionSort);
        toolBar->addAction(actionFilter);

        retranslateUi(StudentMS);

        QMetaObject::connectSlotsByName(StudentMS);
    } // setupUi

    void retranslateUi(QMainWindow *StudentMS)
    {
        StudentMS->setWindowTitle(QCoreApplication::translate("StudentMS", "StudentMS", nullptr));
        actionNew->setText(QCoreApplication::translate("StudentMS", "\346\226\260\345\273\272(&N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("StudentMS", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("StudentMS", "\346\211\223\345\274\200(&O)", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("StudentMS", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("StudentMS", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("StudentMS", "\345\205\263\351\227\255(&C)", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("StudentMS", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd->setText(QCoreApplication::translate("StudentMS", "\345\242\236\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd->setToolTip(QCoreApplication::translate("StudentMS", "\345\242\236\345\212\240", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd->setShortcut(QCoreApplication::translate("StudentMS", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("StudentMS", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("StudentMS", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("StudentMS", "\344\277\235\345\255\230(&S)", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("StudentMS", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("StudentMS", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlter->setText(QCoreApplication::translate("StudentMS", "\344\277\256\346\224\271", nullptr));
#if QT_CONFIG(tooltip)
        actionAlter->setToolTip(QCoreApplication::translate("StudentMS", "\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("StudentMS", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("StudentMS", "\345\210\240\351\231\244", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("StudentMS", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortID->setText(QCoreApplication::translate("StudentMS", "\346\214\211\345\255\246\345\217\267\346\216\222\345\272\217", nullptr));
#if QT_CONFIG(tooltip)
        actionSortID->setToolTip(QCoreApplication::translate("StudentMS", "\346\214\211\345\255\246\345\217\267\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSortName->setText(QCoreApplication::translate("StudentMS", "\346\214\211\345\247\223\345\220\215\346\216\222\345\272\217", nullptr));
#if QT_CONFIG(tooltip)
        actionSortName->setToolTip(QCoreApplication::translate("StudentMS", "\346\214\211\345\247\223\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrint->setText(QCoreApplication::translate("StudentMS", "\346\211\223\345\215\260(&P)", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("StudentMS", "\346\211\223\345\215\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("StudentMS", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("StudentMS", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("StudentMS", "\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTabBar->setText(QCoreApplication::translate("StudentMS", "\350\247\206\347\252\227\346\240\207\347\255\276\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        actionTabBar->setToolTip(QCoreApplication::translate("StudentMS", "\350\247\206\347\252\227\346\240\207\347\255\276\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWindow->setText(QCoreApplication::translate("StudentMS", "\350\247\206\347\252\227\347\252\227\345\217\243\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        actionWindow->setToolTip(QCoreApplication::translate("StudentMS", "\350\247\206\347\252\227\347\252\227\345\217\243\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSascadeSubWindows->setText(QCoreApplication::translate("StudentMS", "\351\207\215\345\217\240\346\216\222\345\210\227", nullptr));
#if QT_CONFIG(tooltip)
        actionSascadeSubWindows->setToolTip(QCoreApplication::translate("StudentMS", "\351\207\215\345\217\240\346\216\222\345\210\227", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTileSubWindows->setText(QCoreApplication::translate("StudentMS", "\346\225\264\351\275\220\346\216\222\345\210\227", nullptr));
#if QT_CONFIG(tooltip)
        actionTileSubWindows->setToolTip(QCoreApplication::translate("StudentMS", "\346\225\264\351\275\220\346\216\222\345\210\227", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSort->setText(QCoreApplication::translate("StudentMS", "\346\216\222\345\272\217", nullptr));
#if QT_CONFIG(tooltip)
        actionSort->setToolTip(QCoreApplication::translate("StudentMS", "\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFilter->setText(QCoreApplication::translate("StudentMS", "\347\255\233\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actionFilter->setToolTip(QCoreApplication::translate("StudentMS", "Filter", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToolbar->setText(QCoreApplication::translate("StudentMS", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217", nullptr));
#if QT_CONFIG(tooltip)
        actionToolbar->setToolTip(QCoreApplication::translate("StudentMS", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatus->setText(QCoreApplication::translate("StudentMS", "\346\230\276\347\244\272\347\212\266\346\200\201\346\240\217", nullptr));
#if QT_CONFIG(tooltip)
        actionStatus->setToolTip(QCoreApplication::translate("StudentMS", "\346\230\276\347\244\272\347\212\266\346\200\201\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOriginQss->setText(QCoreApplication::translate("StudentMS", "\345\216\237\347\224\237\347\232\256\350\202\244", nullptr));
#if QT_CONFIG(tooltip)
        actionOriginQss->setToolTip(QCoreApplication::translate("StudentMS", "\345\216\237\347\224\237\347\232\256\350\202\244", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQssBlue->setText(QCoreApplication::translate("StudentMS", "\350\223\235\350\211\262\344\270\273\351\242\230", nullptr));
#if QT_CONFIG(tooltip)
        actionQssBlue->setToolTip(QCoreApplication::translate("StudentMS", "\350\223\235\350\211\262\344\270\273\351\242\230", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("StudentMS", "\346\226\207\344\273\266(&F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("StudentMS", "\347\274\226\350\276\221(&E)", nullptr));
        menu_6->setTitle(QCoreApplication::translate("StudentMS", "\346\216\222\345\272\217", nullptr));
        menu_3->setTitle(QCoreApplication::translate("StudentMS", "\346\237\245\347\234\213(&V)", nullptr));
        menu_7->setTitle(QCoreApplication::translate("StudentMS", "\344\270\273\351\242\230\347\232\256\350\202\244", nullptr));
        menu_4->setTitle(QCoreApplication::translate("StudentMS", "\347\252\227\345\217\243(&W)", nullptr));
        menu_5->setTitle(QCoreApplication::translate("StudentMS", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("StudentMS", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMS: public Ui_StudentMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMS_H
