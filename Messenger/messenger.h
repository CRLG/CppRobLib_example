#ifndef _ROB_NETWORK_MESSENGER_
#define _ROB_NETWORK_MESSENGER_

#include "databasedemo.h"
#include "transportergeneric.h"
#include "messengerevent.h"
#include "comdriver.h"

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
    ComDriverApp m_com_driver;


private :
    void initMessenger();
};

#endif // _ROB_NETWORK_MESSENGER_
