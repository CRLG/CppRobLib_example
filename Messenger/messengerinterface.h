#ifndef _MESSENGER_INTERFACE_H_
#define _MESSENGER_INTERFACE_H_

#include "messengerinterfacebase.h"

// ====================================================
//
// ====================================================
class MessengerInterface : public MessengerInterfaceBase
{
public:
    MessengerInterface();
    virtual ~MessengerInterface();

    virtual void encode(unsigned char *buff_data, unsigned short buff_size, unsigned short dest_address=0);
};

#endif // _MESSENGER_INTERFACE_H_
