#include "cconfigform.h"
#include "ui_cconfigform.h"

CConfigForm::CConfigForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CConfigForm)
{
    ui->setupUi(this);
}

CConfigForm::~CConfigForm()
{
    delete ui;
}
