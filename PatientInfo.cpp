#include "PatientInfo.h"
#include <QDebug>
// #include <QtGlobal> // 如果你的Qt版本需要，请取消注释

PatientInfo::PatientInfo()
{
    this->ID = "";
    this->name = "";
    this->gender = "";
    this->age = 0;
    this->phone = "";
    this->diagnosis = "";
}

PatientInfo::PatientInfo(QString ID, QString name, QString gender, int age, QString phone, QString diagnosis)
{
    this->ID = ID;
    this->name = name;
    this->gender = gender;
    this->age = age;
    this->phone = phone;
    this->diagnosis = diagnosis;
}

void PatientInfo::showPatientInfo()
{
    qDebug() << "ID:" << ID
             << " name:" << name
             << " gender:" << gender
             << " age:" << age
             << " phone:" << phone
             << " diagnosis:" << diagnosis; // Qt::endl;
}

// --- Getter ---
QString PatientInfo::getID() const { return ID; }
QString PatientInfo::getName() const { return name; }
QString PatientInfo::getGender() const { return gender; }
int PatientInfo::getAge() const { return age; }
QString PatientInfo::getPhone() const { return phone; }
QString PatientInfo::getDiagnosis() const { return diagnosis; }

// --- Setter ---
void PatientInfo::setID(const QString &value) { ID = value; }
void PatientInfo::setName(const QString &value) { name = value; }
void PatientInfo::setGender(const QString &value) { gender = value; }
void PatientInfo::setAge(const int &value) { age = value; }
void PatientInfo::setPhone(const QString &value) { phone = value; }
void PatientInfo::setDiagnosis(const QString &value) { diagnosis = value; }
