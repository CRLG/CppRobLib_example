#include <qdebug.h>
#include "xbeedriverinterface.h"

XbeeDriverInterface::XbeeDriverInterface()
{
}

// pure virtual methods.
// this method is called by driver to inform a valid buffer ws receinved and now ready to be used by application
void XbeeDriverInterface::readyBytes(unsigned char *buff_data, unsigned char buff_size, unsigned short source_id)
{
    qDebug() << "XbeeDriverInterface: a valid buffer of" << buff_size << "data was received frome source" << source_id;
}

// this method is called by driver to write a buffer to physical serial port on specific hardware
void XbeeDriverInterface::write(unsigned char *buff_data, unsigned char buff_size)
{
   qDebug() << "XbeeDriverInterface : Xbee driver request to write" << buff_size << "bytes on phyical port";
}


// this method is called by driver to request a delay on specific hardware
void XbeeDriverInterface::delay_us(unsigned long delay)
{
    qDebug() << "XbeeDriverInterface:" << "Xbee driver request a delay of " << delay << "usec";
}
