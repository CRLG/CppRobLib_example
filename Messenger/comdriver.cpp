#include <QDebug>
#include <QByteArray>
#include "comdriver.h"


ComDriverApp::ComDriverApp()
{
}

ComDriverApp::~ComDriverApp()
{
}

// ______________________________________________
void ComDriverApp::encode(unsigned char *buff_data, unsigned short buff_size, unsigned short dest_address)
{
    qDebug() << "ComDriverApp::encode" << buff_size << "data(s) / destination address" << dest_address;
    qDebug() << QByteArray((char*)buff_data, buff_size);
}


