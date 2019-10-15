#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtaskdatamodel.h"
#include "qlogmodel.h"
#include <QDebug>
#include "accountform.h"
#include "form.h"
#include "cconfigform.h"
#include "ctaskform.h"
#include "logsearchform.h"

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


void MainWindow::on_actionLogin_triggered()
{
    Form* form = new Form;
    form->show();
}

void MainWindow::on_actionAccount_triggered()
{
    AccountForm *form = new AccountForm;
    form->show();
}

void MainWindow::on_actionCfg_triggered()
{
    CConfigForm *form = new CConfigForm;
    form->show();
}

void MainWindow::on_actionTask_triggered()
{
    CTaskForm *form = new CTaskForm;
    form->show();
}

void MainWindow::on_actionLOg_triggered()
{
    LogSearchForm *form = new LogSearchForm;
    form->show();
}
