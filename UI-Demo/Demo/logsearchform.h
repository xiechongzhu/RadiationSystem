#ifndef LOGSEARCHFORM_H
#define LOGSEARCHFORM_H

#include <QWidget>
#include "qlogmodel.h"

namespace Ui {
class LogSearchForm;
}

class LogSearchForm : public QWidget
{
    Q_OBJECT

public:
    explicit LogSearchForm(QWidget *parent = nullptr);
    ~LogSearchForm();

private:
    Ui::LogSearchForm *ui;
    QLogModel m_model;
};

#endif // LOGSEARCHFORM_H
