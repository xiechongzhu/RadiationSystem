#include "csubsystemwindow.h"
#include "ui_csubsystemwindow.h"

CSubSystemWindow::CSubSystemWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSubSystemWindow)
{
    ui->setupUi(this);
}

CSubSystemWindow::~CSubSystemWindow()
{
    delete ui;
}
