/********************************************************************************
** Form generated from reading UI file 'FilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERDIALOG_H
#define UI_FILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *TypeBox;
    QLabel *label_4;
    QComboBox *TargetBox;
    QLabel *label;
    QLineEdit *KeyEdit;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *RegxBox;
    QCheckBox *CaseBox;
    QCheckBox *WildBoix;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *FilterDialog)
    {
        if (FilterDialog->objectName().isEmpty())
            FilterDialog->setObjectName("FilterDialog");
        FilterDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(FilterDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        gridLayoutWidget = new QWidget(FilterDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 50, 369, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TypeBox = new QComboBox(gridLayoutWidget);
        TypeBox->addItem(QString());
        TypeBox->addItem(QString());
        TypeBox->addItem(QString());
        TypeBox->setObjectName("TypeBox");

        gridLayout->addWidget(TypeBox, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        TargetBox = new QComboBox(gridLayoutWidget);
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->setObjectName("TargetBox");

        gridLayout->addWidget(TargetBox, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        KeyEdit = new QLineEdit(gridLayoutWidget);
        KeyEdit->setObjectName("KeyEdit");

        gridLayout->addWidget(KeyEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        RegxBox = new QCheckBox(gridLayoutWidget);
        RegxBox->setObjectName("RegxBox");

        horizontalLayout->addWidget(RegxBox);

        CaseBox = new QCheckBox(gridLayoutWidget);
        CaseBox->setObjectName("CaseBox");

        horizontalLayout->addWidget(CaseBox);

        WildBoix = new QCheckBox(gridLayoutWidget);
        WildBoix->setObjectName("WildBoix");

        horizontalLayout->addWidget(WildBoix);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        label_6 = new QLabel(FilterDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 10, 311, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\271\274\345\234\206\";"));

        retranslateUi(FilterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FilterDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FilterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FilterDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterDialog)
    {
        FilterDialog->setWindowTitle(QCoreApplication::translate("FilterDialog", "Dialog", nullptr));
        TypeBox->setItemText(0, QCoreApplication::translate("FilterDialog", "\351\203\250\345\210\206\345\214\271\351\205\215", nullptr));
        TypeBox->setItemText(1, QCoreApplication::translate("FilterDialog", "\345\211\215\347\274\200\345\214\271\351\205\215", nullptr));
        TypeBox->setItemText(2, QCoreApplication::translate("FilterDialog", "\345\220\216\347\274\200\345\214\271\351\205\215", nullptr));

        label_4->setText(QCoreApplication::translate("FilterDialog", "\346\237\245\350\257\242\347\233\256\346\240\207:", nullptr));
        TargetBox->setItemText(0, QCoreApplication::translate("FilterDialog", "\345\205\250\351\203\250", nullptr));
        TargetBox->setItemText(1, QCoreApplication::translate("FilterDialog", "\346\202\243\350\200\205ID", nullptr));
        TargetBox->setItemText(2, QCoreApplication::translate("FilterDialog", "\345\247\223\345\220\215", nullptr));
        TargetBox->setItemText(3, QCoreApplication::translate("FilterDialog", "\346\200\247\345\210\253", nullptr));
        TargetBox->setItemText(4, QCoreApplication::translate("FilterDialog", "\345\271\264\351\276\204", nullptr));
        TargetBox->setItemText(5, QCoreApplication::translate("FilterDialog", "\347\224\265\350\257\235", nullptr));
        TargetBox->setItemText(6, QCoreApplication::translate("FilterDialog", "\350\257\212\346\226\255\347\273\223\346\236\234", nullptr));

        label->setText(QCoreApplication::translate("FilterDialog", "\345\205\263\351\224\256\345\255\227:", nullptr));
        label_2->setText(QCoreApplication::translate("FilterDialog", "\346\237\245\346\211\276\346\250\241\345\274\217:", nullptr));
        label_3->setText(QCoreApplication::translate("FilterDialog", "\346\237\245\346\211\276\347\262\276\345\272\246:", nullptr));
        RegxBox->setText(QCoreApplication::translate("FilterDialog", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        CaseBox->setText(QCoreApplication::translate("FilterDialog", "\345\244\247\345\260\217\345\206\231\346\225\217\346\204\237", nullptr));
        WildBoix->setText(QCoreApplication::translate("FilterDialog", "\351\200\232\351\205\215\347\254\246", nullptr));
        label_5->setText(QCoreApplication::translate("FilterDialog", "\357\274\210\346\217\220\347\244\272\357\274\232\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\274\232\350\246\206\347\233\226\346\211\200\346\234\211\347\262\276\345\272\246\357\274\211", nullptr));
        label_6->setText(QCoreApplication::translate("FilterDialog", "<html><head/><body><p>\346\254\242\350\277\216\344\275\277\347\224\250\346\237\245\346\211\276\345\212\237\350\203\275\357\274\210\351\273\230\350\256\244\346\235\241\344\273\266\346\227\266\345\217\257\346\230\276\347\244\272\345\205\250\351\203\250\357\274\211</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterDialog: public Ui_FilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERDIALOG_H
