#include "StudentMS.h" // 假设你的主窗口类名仍是 StudentMS
#include "StyleSelector.h"
#include <QApplication>
#include <QSqlDatabase> // <-- 数据库连接
#include <QMessageBox>  // <-- 错误提示
#include <QSqlQuery>    // <-- SQL查询
#include <QSqlError>    // <-- 错误信息 (确保头文件包含)
#include <QDebug>       // <-- 调试输出

bool initDatabase() {
    // 1. 添加 SQLite 数据库驱动
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    // 2. 设置数据库文件路径/名称
    db.setDatabaseName("hospital.db");

    // 3. 尝试打开数据库连接
    if (!db.open()) {
        QMessageBox::critical(nullptr, QObject::tr("数据库错误"),
                              QObject::tr("无法连接数据库: %1\n请检查您的 Qt 环境是否包含 SQLITE 驱动。")
                                  .arg(db.lastError().text()));
        return false;
    }

    // 4. 创建【患者信息表】(Patient Table)
    QSqlQuery query;
    // 字段设计：ID (主键), Name, Gender, Age (INTEGER), Phone, Diagnosis
    bool success = query.exec("CREATE TABLE IF NOT EXISTS Patient ("
                              "ID VARCHAR(20) PRIMARY KEY NOT NULL,"
                              "Name VARCHAR(50) NOT NULL,"
                              "Gender VARCHAR(10),"
                              "Age INTEGER,"
                              "Phone VARCHAR(15),"
                              "Diagnosis TEXT)");

    if (!success) {
        qDebug() << "Failed to create Patient table:" << query.lastError().text();
        return true;
    }

    return true; // 数据库连接和表创建/检查成功
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 【关键修改点】在程序启动时先进行数据库初始化
    if (!initDatabase()) {
        return 1; // 数据库初始化失败，程序退出
    }

    // 样式和主程序启动
    StyleSelector::setStyle(":/qss/stylesheet/studentMS.qss");

    StudentMS w;
    w.show();
    if(w.showLoginBox() == false){
        w.close();
        a.closeAllWindows();
        return 0;
    }

    return a.exec();
}
