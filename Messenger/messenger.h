#ifndef _ROB_NETWORK_MESSENGER_
#define _ROB_NETWORK_MESSENGER_

#include "databasedemo.h"
#include "transportergeneric.h"
#include "messengerevent.h"
#include "messengerinterface.h"

// ====================================================
//
// ====================================================
class Messenger
{
public:
    Messenger();
    virtual ~Messenger();

    void test_RX();
    void test_TX();
    void init();

    DatabaseDemo m_database;
    TransporterGeneric m_transporter;
    MessengerEvent m_event_manager;
    MessengerInterface m_messenger_interface;


private :
    void initMessenger();
};

#endif // _ROB_NETWORK_MESSENGER_
