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
private slots:
    void on_actionLogin_triggered();
    void on_actionAccount_triggered();
    void on_actionCfg_triggered();
    void on_actionTask_triggered();
    void on_actionLOg_triggered();
};

#endif // MAINWINDOW_H
