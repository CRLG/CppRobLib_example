#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "messenger.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Messenger m_messenger;


private:
    Ui::MainWindow *ui;

public slots :
    void on_Button_RX();
    void on_Button_TX();
};

#endif // MAINWINDOW_H
