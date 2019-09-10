#ifndef CSUBSYSTEMWINDOW_H
#define CSUBSYSTEMWINDOW_H

#include <QWidget>

namespace Ui {
class CSubSystemWindow;
}

class CSubSystemWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CSubSystemWindow(QWidget *parent = nullptr);
    ~CSubSystemWindow();

private:
    Ui::CSubSystemWindow *ui;
};

#endif // CSUBSYSTEMWINDOW_H
