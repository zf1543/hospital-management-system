/********************************************************************************
** Form generated from reading UI file 'SortDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QComboBox *sortTarget;
    QComboBox *sortOrder;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName("SortDialog");
        SortDialog->resize(398, 166);
        buttonBox = new QDialogButtonBox(SortDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(SortDialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 40, 341, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget);
        label_21->setObjectName("label_21");

        horizontalLayout_5->addWidget(label_21);

        sortTarget = new QComboBox(horizontalLayoutWidget);
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->setObjectName("sortTarget");

        horizontalLayout_5->addWidget(sortTarget);

        sortOrder = new QComboBox(horizontalLayoutWidget);
        sortOrder->addItem(QString());
        sortOrder->addItem(QString());
        sortOrder->setObjectName("sortOrder");

        horizontalLayout_5->addWidget(sortOrder);


        retranslateUi(SortDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SortDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SortDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QCoreApplication::translate("SortDialog", "Dialog", nullptr));
        label_21->setText(QCoreApplication::translate("SortDialog", "\346\216\222\345\272\217\347\232\204\345\257\271\350\261\241", nullptr));
        sortTarget->setItemText(0, QCoreApplication::translate("SortDialog", "\346\202\243\350\200\205ID", nullptr));
        sortTarget->setItemText(1, QCoreApplication::translate("SortDialog", "\345\247\223\345\220\215", nullptr));
        sortTarget->setItemText(2, QCoreApplication::translate("SortDialog", "\346\200\247\345\210\253", nullptr));
        sortTarget->setItemText(3, QCoreApplication::translate("SortDialog", "\345\271\264\351\276\204", nullptr));
        sortTarget->setItemText(4, QCoreApplication::translate("SortDialog", "\347\224\265\350\257\235", nullptr));
        sortTarget->setItemText(5, QCoreApplication::translate("SortDialog", "\350\257\212\346\226\255\347\273\223\346\236\234", nullptr));

        sortOrder->setItemText(0, QCoreApplication::translate("SortDialog", "\345\215\207\345\272\217", nullptr));
        sortOrder->setItemText(1, QCoreApplication::translate("SortDialog", "\351\231\215\345\272\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
