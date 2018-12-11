#include <QDebug>
#include <QByteArray>
#include "messengerinterface.h"

MessengerInterface::MessengerInterface()
{
}

MessengerInterface::~MessengerInterface()
{
}

// ______________________________________________
void MessengerInterface::encode(unsigned char *buff_data, unsigned short buff_size, unsigned short dest_address)
{
    qDebug() << "MessengerInterface::encode" << buff_size << "data(s) / destination address" << dest_address;
    qDebug() << QByteArray((char*)buff_data, buff_size);
}


