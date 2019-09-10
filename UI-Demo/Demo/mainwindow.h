#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "csubsystemwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
protected:
    void initWidgets();
    void GroupBox6Clicked();
    bool eventFilter(QObject *watched, QEvent *event);
    CSubSystemWindow m_subWnd;
};

#endif // MAINWINDOW_H
