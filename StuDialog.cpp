#include "StuDialog.h"
#include "ui_PatientInfo.h"
#include <QRegularExpression>
#include <QIntValidator> // 用于限制 Age 只能输入数字
#include <QDebug>
#include <QDialogButtonBox> // 包含 QDialogButtonBox 头文件

StuDialog::StuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StuDialog)
{
    ui->setupUi(this);

    // 连接
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [=](){ qDebug("ok or save");});
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, [=](){ qDebug("cancel"); });

    // 设置 QLineEdit 的占位文本
    ui->IDEdit->setPlaceholderText("请输入患者的ID（值唯一）");
    ui->NameEdit->setPlaceholderText("请输入患者的姓名");
    ui->HomeEdit->setPlaceholderText("请输入患者的电话号码");
    ui->AddEdit->setPlaceholderText("请输入患者的诊断结果");


    ui->BirthEdit->setPlaceholderText("请输入患者的年龄（数字）");

    ui->BirthEdit->setValidator(new QIntValidator(0, 150, this));

    ui->SexBox->addItem("男");
    ui->SexBox->addItem("女");

    //Tab Order
    this->setTabOrder(ui->IDEdit,ui->NameEdit);
    this->setTabOrder(ui->NameEdit,ui->SexBox);
    this->setTabOrder(ui->SexBox,ui->BirthEdit);
    this->setTabOrder(ui->BirthEdit,ui->HomeEdit);
    this->setTabOrder(ui->HomeEdit,ui->AddEdit);
}

StuDialog::~StuDialog()
{
    delete ui;
}

PatientInfo& StuDialog::getPatientInfo()
{
    bool ok;
    // 获取 Age (年龄) 时，使用 QLineEdit 的 text().toInt()
    int age = ui->BirthEdit->text().toInt(&ok);
    if (!ok) age = 0;

    this->patientInfo = PatientInfo(ui->IDEdit->text(),
                                    ui->NameEdit->text(),
                                    ui->SexBox->currentText(),
                                    age,
                                    ui->HomeEdit->text(), // Phone
                                    ui->AddEdit->text()); // Diagnosis
    return this->patientInfo;
}

QVector<QString> StuDialog::getInput()
{
    QVector<QString> res;
    res.push_back(ui->IDEdit->text());
    res.push_back(ui->NameEdit->text());
    res.push_back(ui->SexBox->currentText());
    // Age (int) 转换为 QString
    res.push_back(QString::number(ui->BirthEdit->text().toInt()));
    res.push_back(ui->HomeEdit->text());
    res.push_back(ui->AddEdit->text());

    return res;
}

void StuDialog::setByPatientInfo(PatientInfo info)
{
    ui->IDEdit->setText(info.getID());
    ui->NameEdit->setText(info.getName());
    ui->SexBox->setCurrentText(info.getGender());
    ui->BirthEdit->setText(QString::number(info.getAge()));
    ui->HomeEdit->setText(info.getPhone());
    ui->AddEdit->setText(info.getDiagnosis());
}
