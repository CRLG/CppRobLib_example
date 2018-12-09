#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_RX, SIGNAL(clicked()), this, SLOT(on_Button_RX()));
    connect(ui->pushButton_TX, SIGNAL(clicked()), this, SLOT(on_Button_TX()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Button_RX()
{
    m_messenger.test_RX();
}
void MainWindow::on_Button_TX()
{
    m_messenger.test_TX();
}
