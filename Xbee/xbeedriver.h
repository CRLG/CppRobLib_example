#ifndef XBEE_DRIVER_INTERFACE_H_
#define XBEE_DRIVER_INTERFACE_H_

#include "xbeedriverbase.h"

class XbeeDriver : public XbeeDriverBase
{
public:
    XbeeDriver();

    // pure virtual methods from parent class.
    // this method is called by driver to inform a valid buffer ws receinved and now ready to be used by application
    virtual void readyBytes(unsigned char *buff_data, unsigned char buff_size, unsigned short source_id=0);
    // this method is called by driver to write a buffer to physical serial port on specific hardware
    virtual void write(unsigned char *buff_data, unsigned char buff_size);
    // this method is called by driver to request a delay on specific hardware
    virtual void delay_us(unsigned long delay);
};

#endif // XBEE_DRIVER_INTERFACE_H_
