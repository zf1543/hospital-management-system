/********************************************************************************
** Form generated from reading UI file 'StuSubWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUSUBWINDOW_H
#define UI_STUSUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuSubWindow
{
public:
    QGridLayout *gridLayout;
    QTableView *tableWidget;

    void setupUi(QWidget *StuSubWindow)
    {
        if (StuSubWindow->objectName().isEmpty())
            StuSubWindow->setObjectName("StuSubWindow");
        StuSubWindow->resize(400, 300);
        gridLayout = new QGridLayout(StuSubWindow);
        gridLayout->setObjectName("gridLayout");
        tableWidget = new QTableView(StuSubWindow);
        tableWidget->setObjectName("tableWidget");

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(StuSubWindow);

        QMetaObject::connectSlotsByName(StuSubWindow);
    } // setupUi

    void retranslateUi(QWidget *StuSubWindow)
    {
        StuSubWindow->setWindowTitle(QCoreApplication::translate("StuSubWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuSubWindow: public Ui_StuSubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUSUBWINDOW_H
