#ifndef _MESSENGER_EVENT_APP_H_
#define _MESSENGER_EVENT_APP_H_

#include "messengereventbase.h"

// ====================================================
//
// ====================================================
class MessengerEvent : public MessengerEventBase
{
public:
    MessengerEvent();
    virtual ~MessengerEvent();

    void init();

    // _________________________________
    // pure virtual methods from MessengerEvent to be implemented on specific hardware.
    virtual void newFrameReceived(tMessengerFrame *frame);
    virtual void newMessageReceived(MessageBase *msg);
    virtual void frameTransmited(tMessengerFrame *frame);
    virtual void messageTransmited(MessageBase *msg);
    virtual void dataUpdated(char *name, char *val_str);
    virtual void dataChanged(char *name, char *val_str);

};

#endif // _MESSENGER_EVENT_APP_H_
