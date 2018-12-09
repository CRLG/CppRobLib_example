#include "databasedemo.h"

DatabaseDemo::DatabaseDemo()
{
    initMessages();
}

DatabaseDemo::~DatabaseDemo()
{
}

// ____________________________________________________________
unsigned short DatabaseDemo::getMessageCount()
{
    return MESSAGES_COUNT;
}

// ____________________________________________________________
const char* DatabaseDemo::getName()
{
    return "DATABASE_DEMO";
}

// ___________________________________________________________
void DatabaseDemo::getVersion(unsigned char *maj, unsigned char *min)
{
    *maj=1;
    *min=0;
}

// ___________________________________________________________
void DatabaseDemo::initMessages()
{
    unsigned char i;

    for (i=0; i<getMessageCount(); i++)
    {
        m_messages_list[i] = 0;
    }
    i=0;
    m_messages_list[i++] = &m_TimestampMatch;
    m_messages_list[i++] = &m_ExperienceStatus;

    m_p_messages_list = m_messages_list;

    DatabaseBase::initMessages();
}

