#ifndef _ROB_NETWORK_MESSENGER_
#define _ROB_NETWORK_MESSENGER_

#include "databasedemo.h"
#include "transportergeneric.h"
#include "messengerinterfacebase.h"

// ====================================================
//
// ====================================================
class Messenger : public MessengerInterfaceBase
{
public:
    Messenger();
    virtual ~Messenger();

    void test_RX();
    void test_TX();

    // =============================================
    //    Reimplement MessengerInterfaceBase virual
    virtual void encode(unsigned char *buff_data, unsigned short buff_size, unsigned short dest_address=0);

    // Events
    // This method is called by messenger (transporter) to inform a valid frame was received
    virtual void newFrameReceived(tMessengerFrame *frame);
    // This method is called by messenger (transporter) to inform a frame was transmited
    virtual void frameTransmited(tMessengerFrame *frame);
    // This method is called by messenger (database) to inform a known message was received
    virtual void newMessageReceived(MessageBase *msg);
    // This method is called by messenger (database) to inform a message was transmited
    virtual void messageTransmited(MessageBase *msg);
    // This method is called by messenger (message) to inform a data in a message was updated
    virtual void dataUpdated(char *name, char *val_str);
    // This method is called by messenger (message) to inform a data in a message changed value
    virtual void dataChanged(char *name, char *val_str);

    DatabaseDemo m_database;
    TransporterGeneric m_transporter;

};

#endif // _ROB_NETWORK_MESSENGER_
