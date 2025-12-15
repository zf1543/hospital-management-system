#ifndef STUDIALOG_H
#define STUDIALOG_H

#include <QDialog>
#include <QVector>
#include <QDate>
#include "PatientInfo.h" // <-- 替换头文件

#include <iostream>
using namespace  std;

namespace Ui {
class StuDialog;
}

// 患者信息输入和修改的对话框
class StuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StuDialog(QWidget *parent = nullptr);
    ~StuDialog();
    // 修改返回类型为 PatientInfo
    PatientInfo& getPatientInfo();
    // getInput() 返回的 QString vector 需要与 PatientInfo 字段顺序一致
    QVector<QString> getInput();
    // setByStuInfo() 替换为 setByPatientInfo
    void setByPatientInfo(PatientInfo info);


private:
    Ui::StuDialog *ui;
    PatientInfo patientInfo; // <-- 类型更新
};

#endif // STUDIALOG_H
