#include <QDebug>
#include "messenger.h"

Messenger::Messenger()
{
    init();
}

Messenger::~Messenger()
{
}

// ______________________________________________
void Messenger::init()
{
    initMessenger();
}

// ______________________________________________
void Messenger::initMessenger()
{
    m_transporter.setMessengerInterface(&m_messenger_interface);
    m_transporter.setDatabase(&m_database);
    m_transporter.setEventManager(&m_event_manager);

    m_database.setTransporter(&m_transporter);
    m_database.setEventManager(&m_event_manager);

    m_messenger_interface.setTransporter(&m_transporter);
}

// ______________________________________________
void Messenger::test_RX()
{
    // Simulate data reception
    // Message_TIMESTAMP_MATCH : ID 0x0001
    unsigned char data[] = { 'T', 0x00, 0x01, 0x02, 0x00, 0x11, 0x14 };
    for (unsigned int i=0; i<sizeof(data);  i++) {
        m_messenger_interface.decode(data[i]);
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




