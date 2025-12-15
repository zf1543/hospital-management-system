#include "StudentMS.h"
#include "ui_StudentMS.h"

#include <QTableWidget>
#include <QMdiSubWindow>
#include <QDateTime>
#include <QMessageBox>
#include <QTimer>
#include <QLabel>
#include "LoginDialog.h"
#include "StyleSelector.h"


StudentMS::StudentMS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentMS)
{
    ui->setupUi(this);
    setWindowTitle(tr("医院诊疗系统用户信息管理应用"));

    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
    ui->mdiArea->setTabPosition(QTabWidget::North);
    ui->mdiArea->setTabShape(QTabWidget::Rounded);
    ui->mdiArea->setTabsClosable(true);
    ui->mdiArea->setTabsMovable(true);

    this->tableIndex = -1;

    //状态栏
    currentTimeLabel = new QLabel;
    ui->statusBar->addWidget(currentTimeLabel);
    currentTimeLabel->show();
    ui->statusBar->show();
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()),this,SLOT(timeUpdate()));

    //工具栏和状态栏
    this->ui->actionToolbar->setChecked(true);
    this->ui->actionStatus->setChecked(true);


}

StudentMS::~StudentMS()
{
    delete ui;
}

int StudentMS::getActiveTalbeIndex()
{
    if(this->ui->mdiArea->activeSubWindow()==nullptr)
    {
        return -1;
    }else{
        return subWnds.indexOf((StuSubWindow*)this->ui->mdiArea->activeSubWindow()->widget());
    }
}

bool StudentMS::showLoginBox()
{
    // 1. 启动登录对话框
    LoginDialog loginDlg;
    if(loginDlg.exec() == QDialog::Rejected){
        return false;
    }

    // 2. 检查用户名和密码
    if (loginDlg.getUSER() == USERNAME && loginDlg.getPWD() == PASSWORD){
        return true;
    }
    else{
        QMessageBox::warning(this, tr("提示"), tr("用户名或密码错误！"));
        return false;
    }
}

void StudentMS::timeUpdate()
{
    QDateTime current = QDateTime::currentDateTime();
    currentTimeLabel->setText(current.toString("yyyy-MM-dd hh:mm:ss"));
}

void StudentMS::closeEvent(QCloseEvent *event)
{
    // 循环关闭所有子窗口 (StuSubWindow)
    foreach (QMdiSubWindow *wnd, ui->mdiArea->subWindowList()) {
        if (wnd->widget()->close()) {
            event->accept();
        } else {
            event->ignore();
            return;
        }
    }
    QMainWindow::closeEvent(event);
}

//文件操作
void StudentMS::on_actionNew_triggered()
{
    StuSubWindow *wnd = new StuSubWindow(this);
    wnd->setWindowTitle(tr("未命名文件"));
    subWnds.push_back(wnd);

    QMdiSubWindow *sub = ui->mdiArea->addSubWindow(wnd);
    sub->setWindowTitle(wnd->windowTitle());
    sub->show();

    this->tableIndex++;
}

void StudentMS::on_actionClose_triggered()
{
    if(this->getActiveTalbeIndex() != -1){
        this->ui->mdiArea->activeSubWindow()->close();
    }
}

void StudentMS::on_actionSave_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->saveFile();
}

void StudentMS::on_actionSaveAs_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    // 数据库模式下，此功能通常简化为保存
    subWnds[activeIndex]->saveFile();
}

void StudentMS::on_actionOpen_triggered()
{
    // 数据库模式下，打开/导入文件功能被禁用或简化
    QMessageBox::warning(this,tr("提示"),
                         tr("数据库模式下，无需打开外部文件。所有数据已自动加载。\n如果您需要导入旧文件，请使用其他工具。"));
    return;
}

void StudentMS::on_actionPrint_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->printTable();
}

//编辑
void StudentMS::on_actionAdd_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->addLine();
}

void StudentMS::on_actionAlter_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->alterLine();
}

void StudentMS::on_actionDelete_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->deleteLine();
}

void StudentMS::on_actionSortID_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->sortByID();
}

void StudentMS::on_actionSortName_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->sortByName();
}


//窗口
void StudentMS::on_actionTabBar_triggered()
{
    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
}

void StudentMS::on_actionWindow_triggered()
{
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
}

void StudentMS::on_actionSascadeSubWindows_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}

void StudentMS::on_actionTileSubWindows_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void StudentMS::on_actionSort_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->sortByUser();
}

void StudentMS::on_actionFilter_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("提示"),
                             tr("您当前未创建(或打开)文件，请先创建一个文件。"));
        return;
    }
    subWnds[activeIndex]->filter();
}

//查看
void StudentMS::on_actionToolbar_toggled(bool arg1)
{
    if(arg1){
        this->ui->toolBar->show();
        this->ui->mainToolBar->show();
    }else{
        this->ui->toolBar->hide();
        this->ui->mainToolBar->hide();
    }
}

void StudentMS::on_actionStatus_toggled(bool arg1)
{
    if(arg1){
        this->ui->statusBar->show();
    }else{
        this->ui->statusBar->hide();
    }
}

//相关
void StudentMS::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("关于本项目"),
                       tr("<h2>医院诊疗系统用户信息管理应用</h2>"
                          "<p>基于 Qt 6.7.x 和 C++ 实现。</p>"
                          "<p>作者：钟帆</p>"
                          "<p>学号：2023414300128</p>"));
}

//皮肤
void StudentMS::on_actionOriginQss_triggered()
{
    StyleSelector::setStyle(":/qss/qss/origin.qss");
}

void StudentMS::on_actionQssBlue_triggered()
{
    StyleSelector::setStyle(":/qss/qss/blue.qss");
}
// 文件结束
