#ifndef _DATABASE_DEMO_H
#define _DATABASE_DEMO_H

#include "message_timestamp_match.h"
#include "message_experience_status.h"

#include "databasebase.h"

// ====================================================
//        DATABASE
// ====================================================
class DatabaseDemo : public DatabaseBase
{
public:
    DatabaseDemo();
    ~DatabaseDemo();

    virtual const char *getName();
    virtual void getVersion(unsigned char *maj, unsigned char *min);
    virtual unsigned short getMessageCount();

#define MESSAGES_COUNT 2
    MessageBase *m_messages_list[MESSAGES_COUNT];

    Message_TIMESTAMP_MATCH m_TimestampMatch;
    Message_EXPERIENCE_STATUS m_ExperienceStatus;
private :
    void initMessages();
};

#endif // _DATABASE_DEMO_H
