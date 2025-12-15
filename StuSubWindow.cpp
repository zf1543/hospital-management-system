#include "StuSubWindow.h"
#include "ui_StuSubWindow.h"

#include <QHeaderView>
#include <QSqlTableModel>
#include <QTableView>
#include <QSqlError>
#include <QSqlQuery>
#include <QRegularExpression>
#include <QCloseEvent>


StuSubWindow::StuSubWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuSubWindow)
{
    ui->setupUi(this);

    // 【修改点 1：View 和 Model 初始化】
    // 假设您在 .ui 文件中已将 QTableWidget 的 class 属性改为了 QTableView
    this->tb = (QTableView*)ui->tableWidget;
    this->filePath = "";
    this->flagModified = false;
    this->stuFilter = new FilterDialog();
    this->stuSorter = new SortDialog();

    // 初始化 Model
    this->model = new QSqlTableModel(this);
    this->model->setTable("Patient"); // 设置操作的数据库表名
    this->model->setEditStrategy(QSqlTableModel::OnManualSubmit); // 手动提交修改
    this->model->select(); // 填充数据

    // 设置列标题
    model->setHeaderData(0, Qt::Horizontal, tr("患者ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("性别"));
    model->setHeaderData(3, Qt::Horizontal, tr("年龄"));
    model->setHeaderData(4, Qt::Horizontal, tr("电话"));
    model->setHeaderData(5, Qt::Horizontal, tr("诊断结果"));

    // View 绑定 Model
    tb->setModel(this->model);
    tb->setSelectionBehavior(QAbstractItemView::SelectRows);
    tb->setSelectionMode (QAbstractItemView::SingleSelection);
    tb->setEditTriggers(QAbstractItemView::DoubleClicked); // 允许双击编辑

    // 【修改点 2：信号槽更新】
    //connect(tb, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(on_tableView_doubleClicked(const QModelIndex&)));
}

StuSubWindow::~StuSubWindow()
{
    delete ui;
    delete stuFilter;
    delete stuSorter;
    // model 的父对象是 this，通常不需要手动 delete
}


// ========================================================================
// 核心 CRUD 函数重写 (使用 QSqlTableModel)
// ========================================================================

void StuSubWindow::addLine()
{
    StuDialog *dialog = new StuDialog();
    if(dialog->exec() == QDialog::Accepted)
    {
        QVector<QString> res = dialog->getInput();

        // 1. 插入新行
        int row = model->rowCount();
        if (!model->insertRow(row)) {
            QMessageBox::warning(this, tr("错误"), tr("无法插入新行: %1").arg(model->lastError().text()));
            delete dialog;
            return;
        }

        // 2. 写入 Model
        model->setData(model->index(row, 0), res[0]); // ID
        model->setData(model->index(row, 1), res[1]); // Name
        model->setData(model->index(row, 2), res[2]); // Gender
        model->setData(model->index(row, 3), res[3].toInt()); // Age (int)
        model->setData(model->index(row, 4), res[4]); // Phone
        model->setData(model->index(row, 5), res[5]); // Diagnosis

        // 3. 提交到数据库
        if (!model->submitAll()) {
            QMessageBox::warning(this, tr("错误"), tr("数据库提交失败（ID重复或数据格式错误）: %1").arg(model->lastError().text()));
            model->revertAll(); // 撤销所有更改
        } else {
            model->select(); // 刷新视图
        }
    }
    delete dialog;
}

void StuSubWindow::alterLine()
{
    QModelIndex currentIndex = tb->currentIndex();
    if (!currentIndex.isValid()){
        QMessageBox::warning(this,tr("提示"), tr("请选中一行数据进行修改！"));
        return;
    }
    int row = currentIndex.row();

    // 从 Model 中提取当前行数据
    PatientInfo info(
        model->data(model->index(row, 0)).toString(),
        model->data(model->index(row, 1)).toString(),
        model->data(model->index(row, 2)).toString(),
        model->data(model->index(row, 3)).toInt(),
        model->data(model->index(row, 4)).toString(),
        model->data(model->index(row, 5)).toString()
        );

    StuDialog *dialog = new StuDialog();
    dialog->setByPatientInfo(info);

    if(dialog->exec() == QDialog::Accepted)
    {
        QVector<QString> res = dialog->getInput();

        // 1. 写入 Model (ID 不变)
        model->setData(model->index(row, 1), res[1]); // Name
        model->setData(model->index(row, 2), res[2]); // Gender
        model->setData(model->index(row, 3), res[3].toInt()); // Age
        model->setData(model->index(row, 4), res[4]); // Phone
        model->setData(model->index(row, 5), res[5]); // Diagnosis

        // 2. 提交到数据库
        if (!model->submitAll()) {
            QMessageBox::warning(this, tr("错误"), tr("数据库提交失败: %1").arg(model->lastError().text()));
            model->revertAll();
        } else {
            model->select();
        }
    }
    delete dialog;
}

void StuSubWindow::deleteLine()
{
    QModelIndex currentIndex = tb->currentIndex();
    if (!currentIndex.isValid()){
        QMessageBox::warning(this,tr("提示"), tr("请选中一行数据进行删除！"));
        return;
    }
    int row = currentIndex.row();
    QString ID = model->data(model->index(row, 0)).toString();

    QMessageBox::StandardButton button;
    button=QMessageBox::question(this,tr("删除数据"),
                                   tr("确认删除患者ID为 ")+ID+tr(" 的数据？"),
                                   QMessageBox::Yes|QMessageBox::No);
    if(button == QMessageBox::Yes)
    {
        model->removeRow(row);
        if (!model->submitAll()) {
            QMessageBox::warning(this, tr("错误"), tr("数据库删除失败: %1").arg(model->lastError().text()));
            model->revertAll();
        } else {
            model->select();
        }
    }
}


void StuSubWindow::sortByID() { model->sort(0, Qt::AscendingOrder); }
void StuSubWindow::sortByName() { model->sort(1, Qt::AscendingOrder); }

void StuSubWindow::sortByUser()
{
    if(this->stuSorter->exec() == QDialog::Accepted)
    {
        model->sort(this->stuSorter->getSortTarget(),
                    (Qt::SortOrder)this->stuSorter->getSortOrder());
    }
}

void StuSubWindow::filter()
{
    if(this->stuFilter->exec() == QDialog::Accepted)
    {
        // 1. 获取参数：文本优先，不要索引！
        QString key = this->stuFilter->getKey();
        QString targetText = this->stuFilter->getTargetText(); // 如“姓名”“年龄”
        bool isWild = this->stuFilter->isWild();

        // 2. 空关键字判断
        if (key.isEmpty()) {
            QMessageBox::information(this, "提示", "请输入查询关键字！");
            return;
        }

        // 3. 文本→数据库字段的映射（硬编码，绝对不会错）
        QMap<QString, QString> textToColumn;
        textToColumn["患者ID"] = "ID";
        textToColumn["姓名"] = "Name";
        textToColumn["性别"] = "Gender";
        textToColumn["年龄"] = "Age";
        textToColumn["电话"] = "Phone";
        textToColumn["诊断结果"] = "Diagnosis";

        // 4. 获取数据库字段
        QString dbColumn = textToColumn.value(targetText, "ID"); // 找不到就默认查ID

        // 5. 处理关键字和SQL语句（重点：年龄字段单独处理）
        QString filterString;
        QString safeKey = key.replace("'", "''");
        QString sqlKey = isWild ? "%" + safeKey + "%" : safeKey;

        if (dbColumn == "Age") {
            // 年龄是数字：先判断关键字是否为数字，非数字直接提示
            bool isNumber;
            key.toInt(&isNumber);
            if (!isNumber) {
                QMessageBox::warning(this, "错误", "年龄必须输入数字！");
                return;
            }
            // 数字类型不加引号
            filterString = isWild ?
                               QString("%1 LIKE %2").arg(dbColumn).arg(sqlKey) :
                               QString("%1 = %2").arg(dbColumn).arg(safeKey);
        } else {
            // 字符串类型加引号
            filterString = isWild ?
                               QString("%1 LIKE '%2'").arg(dbColumn).arg(sqlKey) :
                               QString("%1 = '%2'").arg(dbColumn).arg(safeKey);
        }

        // 6. 调试和执行筛选
        qDebug() << "筛选参数：关键字=" << key << "，查询目标=" << targetText << "，是否通配符=" << isWild;
        qDebug() << "执行筛选SQL：" << filterString;

        model->setFilter(filterString);
        if (!model->select()) {
            QMessageBox::warning(this, "查询失败", "数据库错误：" + model->lastError().text());
            model->setFilter("");
            model->select();
        }
    }
}

bool StuSubWindow::QString_Matches(const QString& str,const QString& pattern,const Qt::MatchFlags& flags)
{
    // 客户端正则匹配 (在数据库模式下不再需要，但保留以防万一)
    if (flags & Qt::MatchRegularExpression) {
        QRegularExpression::PatternOptions options = (flags & Qt::MatchCaseSensitive) ? QRegularExpression::NoPatternOption : QRegularExpression::CaseInsensitiveOption;
        return str.contains(QRegularExpression(pattern, options));
    }
    return str.contains(pattern, (flags & Qt::MatchCaseSensitive) ? Qt::CaseSensitive : Qt::CaseInsensitive);

}



void StuSubWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index);
    // QTableView 默认会触发编辑，无需额外操作。如果需要弹窗，请取消注释 alterLine()
    // alterLine();
}

void StuSubWindow::closeFile() { this->close(); }

bool StuSubWindow::saveFile()
{
    // 提交所有未提交的更改
    if (model->submitAll()) {
        this->flagModified = false;
        return true;
    } else {
        QMessageBox::warning(this, tr("错误"), tr("数据保存失败: %1\n请检查数据是否符合要求（例如ID唯一）").arg(model->lastError().text()));
        model->revertAll(); // 撤销未提交的更改
        model->select();
        return false;
    }
}



void StuSubWindow::closeEvent(QCloseEvent *event)
{
    if(model->isDirty()) // 检查 Model 是否有未提交的更改
    {
        QMessageBox::StandardButton button;
        QString name = this->windowTitle();
        button=QMessageBox::question(this,tr("退出程序"),QString(name+tr("有未保存的更改，是否保存")),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if(button==QMessageBox::No)
        {
            model->revertAll(); // 放弃所有更改
            event->accept();
        }
        else if(button==QMessageBox::Yes)
        {
            if(this->saveFile()){
                event->accept();
            }else{
                event->ignore();
            }
        }
        else if(button==QMessageBox::Cancel)
        {
            event->ignore();
        }
    }
    else{
        event->accept();
    }
}

QString StuSubWindow::getFilePath() const { return filePath; }
void StuSubWindow::printTable() { /* 打印逻辑 */ }
