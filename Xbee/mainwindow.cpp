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
    unsigned char data[100] = { 0x12, 0x10, 'T', 0x12, 0x23, 0x1, 0xAB, 0xFF, 0xAB, 0x00};

    // Simule des données entrantes en provenance d'une liaison série par exemple
    // Une fois décodées, la callback readyBytes sera appelée par le driver pour fournir les données utiles reçues
    for (int i=0; i<10; i++) {
        m_xbee.decode(data[i]);
    }
}

void MainWindow::on_Button_TX()
{
    unsigned char data[100] = { 'T', 0x12, 0x23, 0x1, 0xAB, 0xFF};

    // L'applicatif demande l'encodage de données utiles au format XBEE et sa transmission.
    m_xbee.encode(data, 6, 0x87);
}
