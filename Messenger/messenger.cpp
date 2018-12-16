#include <QDebug>
#include "messenger.h"

Messenger::Messenger()
{
    init(&m_transporter, &m_database);
}

Messenger::~Messenger()
{
}


// ===================================================
//              MESSENGER OUTPUT
// ===================================================
// ______________________________________________
void Messenger::encode(unsigned char *buff_data, unsigned short buff_size, unsigned short dest_address)
{
    qDebug() << "Messenger::encode" << buff_size << "data(s) / destination address" << dest_address;
    qDebug() << QByteArray((char*)buff_data, buff_size);
}

// ===================================================
//                  MESSENGER EVENTS
// ===================================================
// ______________________________________________
void Messenger::newFrameReceived(tMessengerFrame *frame)
{
    qDebug() << "Messenger::A frame with ID" << frame->ID << "received from address" << frame->SourceAddress;
}

// ______________________________________________
void Messenger::newMessageReceived(MessageBase *msg)
{
    qDebug() << "Messenger::New Message" << msg->getName() << "received from address " << msg->getSourceAddress();
}

// ______________________________________________
void Messenger::frameTransmited(tMessengerFrame *frame)
{
    qDebug() << "Messenger::A Frame with ID" << frame->ID << "was transmited by Messenger to destination :" << frame->DestinationAddress;
}

// ______________________________________________
void Messenger::messageTransmited(MessageBase *msg)
{
    qDebug() << "Messenger::Message" << msg->getName() << "was transmited to destination :" << msg->getDestinationAddress();
}

// ______________________________________________
void Messenger::dataUpdated(char *name, char *val_str)
{
    qDebug() << "Messenger::Signal" << name << "updated with value" << val_str;
}

// ______________________________________________
void Messenger::dataChanged(char *name, char *val_str)
{
    qDebug() << "Signal" << name << "changed with value" << val_str;
}


// ===================================================
//                  LOCAL METHODS
// ===================================================
// ______________________________________________
void Messenger::test_RX()
{
    // Simulate data reception
    // Message_TIMESTAMP_MATCH : ID 0x0001
    unsigned char data[] = { 'T', 0x00, 0x01, 0x02, 0x00, 0x11, 0x14 };
    for (unsigned int i=0; i<sizeof(data);  i++) {
        decode(data[i]);
    }
}

void Messenger::test_TX()
{
    // Send message
    Message_EXPERIENCE_STATUS *msg = &m_database.m_ExperienceStatus;
    msg->ExperienceStatus = 0xABCD;
    m_database.m_ExperienceStatus.setDestinationAddress(98);
    msg->send();
    m_database.m_ExperienceStatus.setDestinationAddress(95);  // send once again to another destination
    msg->send();
}
