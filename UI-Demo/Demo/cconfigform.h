#ifndef CCONFIGFORM_H
#define CCONFIGFORM_H

#include <QWidget>

namespace Ui {
class CConfigForm;
}

class CConfigForm : public QWidget
{
    Q_OBJECT

public:
    explicit CConfigForm(QWidget *parent = nullptr);
    ~CConfigForm();

private:
    Ui::CConfigForm *ui;
};

#endif // CCONFIGFORM_H
