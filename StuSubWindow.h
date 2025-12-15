#ifndef STUSUBWINDOW_H
#define STUSUBWINDOW_H

#include <QWidget>
#include <QMessageBox>
#include <QMdiSubWindow>
#include <QTableView> // <-- 替换 QTableWidget
#include <QSqlTableModel> // <-- 核心 Model
#include <QSqlError>
#include <QDebug>
#include <QFileDialog>
#include <QCloseEvent>
#include "StuDialog.h"
#include "PatientInfo.h" // <-- 新的头文件
#include "config.h"
#include "FilterDialog.h"
#include "SortDialog.h"

namespace Ui {
class StuSubWindow;
}

// 子窗口，维护一张表格 (现在是 View-Model 结构)
class StuSubWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StuSubWindow(QWidget *parent = nullptr);
    ~StuSubWindow();

    void addLine();
    void alterLine();
    void deleteLine();

    void sortByID();
    void sortByName();
    void sortByUser();
    void filter();


    void closeFile();
    bool saveFile();


    void closeEvent(QCloseEvent *event);
    void printTable();

    // 兼容函数（数据库模式下不再进行客户端正则匹配）
    bool QString_Matches(const QString& str,const QString& pattern,const Qt::MatchFlags& flags);
    QString getFilePath() const; // 仅保留签名以避免主窗口依赖报错


private slots:
    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::StuSubWindow *ui;

    QTableView *tb;
    QSqlTableModel *model;

    QString filePath;
    bool flagModified;
    FilterDialog *stuFilter;
    SortDialog *stuSorter;
};

#endif // STUSUBWINDOW_H
