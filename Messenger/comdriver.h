#ifndef _COM_DRIVER_APP_H_
#define _COM_DRIVER_APP_H_

#include "comdriverbase.h"

// ====================================================
//
// ====================================================
class ComDriverApp : public ComDriverBase
{
public:
    ComDriverApp();
    virtual ~ComDriverApp();

    virtual void encode(unsigned char *buff_data, unsigned short buff_size, unsigned short dest_address=0);
};

#endif // _COM_DRIVER_APP_H_
