#include "FilterDialog.h"
#include "ui_FilterDialog.h"

FilterDialog::FilterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FilterDialog)
{
    ui->setupUi(this);

    ui->TargetBox->clear();
    // 重新添加一次选项即可
    ui->TargetBox->addItems({"患者ID", "姓名", "性别", "年龄", "电话", "诊断结果"});

    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [=](){ qDebug("ok or save");}); //绑定
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, [=](){ qDebug("cancel"); });
}

FilterDialog::~FilterDialog()
{
    delete ui;
}

QString FilterDialog::getKey()
{
    return this->ui->KeyEdit->text();
}

QString FilterDialog::getTarget()
{
    return this->ui->TargetBox->currentText();
}

int FilterDialog::getTargetIndex()
{
    return this->ui->TargetBox->currentIndex();
}

QString FilterDialog::getType()
{
    return this->ui->TypeBox->currentText();
}

bool FilterDialog::isRegex()
{
    return this->ui->RegxBox->checkState();
}

bool FilterDialog::isWild()
{
    return this->ui->WildBoix->checkState();
}

QString FilterDialog::getTargetText()
{
    return ui->TargetBox->currentText(); // 返回下拉框选中的文字，如“姓名”
}

bool FilterDialog::isCaseSensitive()
{
    return this->ui->CaseBox->checkState();
}
