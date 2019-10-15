#include "ctaskform.h"
#include "ui_ctaskform.h"

CTaskForm::CTaskForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CTaskForm)
{
    ui->setupUi(this);
}

CTaskForm::~CTaskForm()
{
    delete ui;
}
