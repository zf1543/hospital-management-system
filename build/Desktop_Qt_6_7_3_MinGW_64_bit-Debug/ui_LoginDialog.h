/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Welcome;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *UserEdit;
    QLabel *UserName;
    QLineEdit *PwdEdit;
    QLabel *Password;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        Welcome = new QLabel(LoginDialog);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(80, 30, 281, 91));
        Welcome->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        gridLayoutWidget_2 = new QWidget(LoginDialog);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(30, 120, 333, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        UserEdit = new QLineEdit(gridLayoutWidget_2);
        UserEdit->setObjectName("UserEdit");

        gridLayout_2->addWidget(UserEdit, 0, 1, 1, 1);

        UserName = new QLabel(gridLayoutWidget_2);
        UserName->setObjectName("UserName");

        gridLayout_2->addWidget(UserName, 0, 0, 1, 1);

        PwdEdit = new QLineEdit(gridLayoutWidget_2);
        PwdEdit->setObjectName("PwdEdit");

        gridLayout_2->addWidget(PwdEdit, 1, 1, 1, 1);

        Password = new QLabel(gridLayoutWidget_2);
        Password->setObjectName("Password");

        gridLayout_2->addWidget(Password, 1, 0, 1, 1);

        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 91, 81));

        retranslateUi(LoginDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LoginDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LoginDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        Welcome->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\351\222\237\345\270\206\347\232\204\345\214\273\351\231\242\347\226\227\350\257\212\347\263\273\347\273\237\347\224\250\346\210\267\344\277\241\346\201\257\347\256\241\347\220\206\345\272\224\347\224\250</span></p><p align=\"center\">\346\254\242\350\277\216\346\202\250\347\232\204\344\275\277\347\224\250</p></body></html>", nullptr));
        UserName->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215:", nullptr));
        Password->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p align=\"right\">\345\257\206\347\240\201:  </p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p><img src=\":/icon/icon/softSmall.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
