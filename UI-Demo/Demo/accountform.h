#ifndef ACCOUNTFORM_H
#define ACCOUNTFORM_H

#include <QWidget>
#include "caccountmodel.h"

namespace Ui {
class AccountForm;
}

class AccountForm : public QWidget
{
    Q_OBJECT

public:
    explicit AccountForm(QWidget *parent = nullptr);
    ~AccountForm();

private:
    Ui::AccountForm *ui;
    CAccountModel m_model;
};

#endif // ACCOUNTFORM_H
