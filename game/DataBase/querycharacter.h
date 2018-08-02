#ifndef QUERYCHARACTER_H
#define QUERYCHARACTER_H

#include "databasemanagementlite.h"
#include "charactersmap.h"

#include <QSqlQuery>

class QueryCharacter : public DataBaseManagementLite
{
public:
    QueryCharacter();
    ~QueryCharacter();
    void loadPlayerStatistics();
    void setPersonality(Character_t character);
    QString getPersonalityName(Character_t character);

private:

    QSqlQuery *query;
};

#endif // QUERYCHARACTER_H
