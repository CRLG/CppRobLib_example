#include <QDebug>
#include <QByteArray>
#include "messengerinterface.h"
#include "messagebase.h"

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

// ______________________________________________
void MessengerInterface::newFrameReceived(tMessengerFrame *frame)
{
    qDebug() << "MessengerInterface::A frame with ID" << frame->ID << "received from address" << frame->SourceAddress;
}

// ______________________________________________
void MessengerInterface::newMessageReceived(MessageBase *msg)
{
    qDebug() << "MessengerInterface::New Message" << msg->getName() << "received from address " << msg->getSourceAddress();
}

// ______________________________________________
void MessengerInterface::frameTransmited(tMessengerFrame *frame)
{
    qDebug() << "MessengerInterface::A Frame with ID" << frame->ID << "was transmited by Messenger to destination :" << frame->DestinationAddress;
}

// ______________________________________________
void MessengerInterface::messageTransmited(MessageBase *msg)
{
    qDebug() << "MessengerInterface::Message" << msg->getName() << "was transmited to destination :" << msg->getDestinationAddress();
}

// ______________________________________________
void MessengerInterface::dataUpdated(char *name, char *val_str)
{
    qDebug() << "MessengerInterface::Signal" << name << "updated with value" << val_str;
}

// ______________________________________________
void MessengerInterface::dataChanged(char *name, char *val_str)
{
    qDebug() << "Signal" << name << "changed with value" << val_str;
}

