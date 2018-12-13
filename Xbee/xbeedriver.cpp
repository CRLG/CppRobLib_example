#include <qdebug.h>
#include <qthread.h>
#include "xbeedriver.h"

XbeeDriver::XbeeDriver()
{
}

// pure virtual methods.
// this method is called by driver to inform a valid buffer ws receinved and now ready to be used by application
void XbeeDriver::readyBytes(unsigned char *buff_data, unsigned char buff_size, unsigned short source_id)
{
    qDebug() << "XbeeDriver: a valid buffer of" << buff_size << "data was received frome source" << source_id;
    for (int i=0; i<buff_size; i++) {
        qDebug("  > 0x%x", buff_data[i]);
    }
}

// this method is called by driver to write a buffer to physical serial port on specific hardware
void XbeeDriver::write(unsigned char *buff_data, unsigned char buff_size)
{
   qDebug() << "XbeeDriver : Xbee driver request to write" << buff_size << "bytes on phyical port";
   for (int i=0; i<buff_size; i++) {
       qDebug("  > 0x%x", buff_data[i]);
   }
}


// this method is called by driver to request a delay on specific hardware
void XbeeDriver::delay_us(unsigned long delay)
{
    qDebug() << "XbeeDriver:" << "Xbee driver request a delay of " << delay << "usec";
   QThread::usleep(delay);
}
