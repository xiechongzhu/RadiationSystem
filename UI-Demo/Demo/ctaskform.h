#ifndef CTASKFORM_H
#define CTASKFORM_H

#include <QWidget>

namespace Ui {
class CTaskForm;
}

class CTaskForm : public QWidget
{
    Q_OBJECT

public:
    explicit CTaskForm(QWidget *parent = nullptr);
    ~CTaskForm();

private:
    Ui::CTaskForm *ui;
};

#endif // CTASKFORM_H
