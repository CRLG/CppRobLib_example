#include <QDebug>
#include "messengerevent.h"
#include "messagebase.h"

MessengerEvent::MessengerEvent()
{
}

MessengerEvent::~MessengerEvent()
{
}

// ______________________________________________
void MessengerEvent::init()
{
}

void MessengerEvent::newFrameReceived(tMessengerFrame *frame)
{
    qDebug() << "MessengerEvent::A frame with ID" << frame->ID << "received from address" << frame->SourceAddress;
}

void MessengerEvent::newMessageReceived(MessageBase *msg)
{
    qDebug() << "MessengerEvent::New Message" << msg->getName() << "received from address " << msg->getSourceAddress();
}

void MessengerEvent::frameTransmited(tMessengerFrame *frame)
{
    qDebug() << "MessengerEvent::A Frame with ID" << frame->ID << "was transmited by Messenger to destination :" << frame->DestinationAddress;
}

void MessengerEvent::messageTransmited(MessageBase *msg)
{
    qDebug() << "MessengerEvent::Message" << msg->getName() << "was transmited to destination :" << msg->getDestinationAddress();
}

void MessengerEvent::dataUpdated(char *name, char *val_str)
{
    qDebug() << "MessengerEvent::Signal" << name << "updated with value" << val_str;
}


void MessengerEvent::dataChanged(char *name, char *val_str)
{
    qDebug() << "Signal" << name << "changed with value" << val_str;
}

