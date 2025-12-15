/********************************************************************************
** Form generated from reading UI file 'PatientInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFO_H
#define UI_PATIENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *AddEdit;
    QLabel *StuSex;
    QLineEdit *NameEdit;
    QComboBox *SexBox;
    QLineEdit *IDEdit;
    QLabel *StuName;
    QLabel *StuBirth;
    QLabel *StuID;
    QLabel *StuHome;
    QLineEdit *HomeEdit;
    QLabel *StuAdd;
    QLineEdit *BirthEdit;

    void setupUi(QDialog *StuDialog)
    {
        if (StuDialog->objectName().isEmpty())
            StuDialog->setObjectName("StuDialog");
        StuDialog->resize(382, 304);
        buttonBox = new QDialogButtonBox(StuDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 230, 241, 81));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        verticalLayoutWidget = new QWidget(StuDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 341, 211));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        AddEdit = new QLineEdit(verticalLayoutWidget);
        AddEdit->setObjectName("AddEdit");

        gridLayout->addWidget(AddEdit, 5, 1, 1, 1);

        StuSex = new QLabel(verticalLayoutWidget);
        StuSex->setObjectName("StuSex");

        gridLayout->addWidget(StuSex, 2, 0, 1, 1);

        NameEdit = new QLineEdit(verticalLayoutWidget);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 1, 1, 1, 1);

        SexBox = new QComboBox(verticalLayoutWidget);
        SexBox->setObjectName("SexBox");

        gridLayout->addWidget(SexBox, 2, 1, 1, 1);

        IDEdit = new QLineEdit(verticalLayoutWidget);
        IDEdit->setObjectName("IDEdit");

        gridLayout->addWidget(IDEdit, 0, 1, 1, 1);

        StuName = new QLabel(verticalLayoutWidget);
        StuName->setObjectName("StuName");

        gridLayout->addWidget(StuName, 1, 0, 1, 1);

        StuBirth = new QLabel(verticalLayoutWidget);
        StuBirth->setObjectName("StuBirth");

        gridLayout->addWidget(StuBirth, 3, 0, 1, 1);

        StuID = new QLabel(verticalLayoutWidget);
        StuID->setObjectName("StuID");

        gridLayout->addWidget(StuID, 0, 0, 1, 1);

        StuHome = new QLabel(verticalLayoutWidget);
        StuHome->setObjectName("StuHome");

        gridLayout->addWidget(StuHome, 4, 0, 1, 1);

        HomeEdit = new QLineEdit(verticalLayoutWidget);
        HomeEdit->setObjectName("HomeEdit");

        gridLayout->addWidget(HomeEdit, 4, 1, 1, 1);

        StuAdd = new QLabel(verticalLayoutWidget);
        StuAdd->setObjectName("StuAdd");

        gridLayout->addWidget(StuAdd, 5, 0, 1, 1);

        BirthEdit = new QLineEdit(verticalLayoutWidget);
        BirthEdit->setObjectName("BirthEdit");

        gridLayout->addWidget(BirthEdit, 3, 1, 1, 1);

        StuID->raise();
        StuName->raise();
        StuSex->raise();
        StuBirth->raise();
        StuAdd->raise();
        StuHome->raise();
        HomeEdit->raise();
        AddEdit->raise();
        NameEdit->raise();
        SexBox->raise();
        IDEdit->raise();
        BirthEdit->raise();
        verticalLayoutWidget->raise();
        buttonBox->raise();

        retranslateUi(StuDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StuDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StuDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(StuDialog);
    } // setupUi

    void retranslateUi(QDialog *StuDialog)
    {
        StuDialog->setWindowTitle(QCoreApplication::translate("StuDialog", "Dialog", nullptr));
        StuSex->setText(QCoreApplication::translate("StuDialog", "\346\200\247\345\210\253\357\274\232", nullptr));
        StuName->setText(QCoreApplication::translate("StuDialog", "\345\247\223\345\220\215\357\274\232", nullptr));
        StuBirth->setText(QCoreApplication::translate("StuDialog", "\345\271\264\351\276\204\357\274\232", nullptr));
        StuID->setText(QCoreApplication::translate("StuDialog", "\346\202\243\350\200\205ID\357\274\232", nullptr));
        StuHome->setText(QCoreApplication::translate("StuDialog", "\347\224\265\350\257\235\357\274\232", nullptr));
        StuAdd->setText(QCoreApplication::translate("StuDialog", "\350\257\212\346\226\255\347\273\223\346\236\234\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuDialog: public Ui_StuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFO_H
