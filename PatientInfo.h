#ifndef PATIENTINFO_H
#define PATIENTINFO_H

#include "QString"
#include "QDebug"

// 患者信息的模版
class PatientInfo
{
public:
    PatientInfo();
    // 字段更新: ID, Name, Gender, Age(int), Phone, Diagnosis
    PatientInfo(QString ID, QString name, QString gender, int age, QString phone, QString diagnosis);

    void showPatientInfo();

    // Getter
    QString getID() const;
    QString getName() const;
    QString getGender() const;
    int getAge() const;
    QString getPhone() const;
    QString getDiagnosis() const;

    // Setter
    void setID(const QString &value);
    void setName(const QString &value);
    void setGender(const QString &value);
    void setAge(const int &value);
    void setPhone(const QString &value);
    void setDiagnosis(const QString &value);

private:
    QString ID;
    QString name;
    QString gender;
    int age;
    QString phone;
    QString diagnosis;
};

#endif // PATIENTINFO_H
