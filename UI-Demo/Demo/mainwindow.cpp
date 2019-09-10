#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtaskdatamodel.h"
#include "qctrlmodel.h"
#include "qlogmodel.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWidgets();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWidgets()
{
    QTaskDataModel *pTaskModel = new QTaskDataModel;
    ui->tableViewTask->setModel(pTaskModel);
    QCtrlModel *pCtrlModel = new QCtrlModel;
    ui->tableViewCtrl->setModel(pCtrlModel);
    QLogModel *pLogModel = new QLogModel;
    ui->tableViewLog->setModel(pLogModel);
    ui->groupBox_6->installEventFilter(this);
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->groupBox_6 && event->type() == QEvent::MouseButtonDblClick)
    {
        m_subWnd.show();
        return true;
    }
    return QMainWindow::eventFilter(watched, event);
}

