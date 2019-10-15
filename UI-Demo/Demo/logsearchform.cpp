#include "logsearchform.h"
#include "ui_logsearchform.h"

LogSearchForm::LogSearchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogSearchForm)
{
    ui->setupUi(this);
    ui->tableViewLog->setModel(&m_model);
}

LogSearchForm::~LogSearchForm()
{
    delete ui;
}
