#ifndef QUERYCHARACTER_H
#define QUERYCHARACTER_H

#include "databasemanagementlite.h"
#include "character.h"

#include <QSqlQuery>

class QueryCharacter : public DataBaseManagementLite
{
public:
    QueryCharacter();
    void loadPlayerStatistics(Character &ch);

private:

    QSqlQuery *query;
};

#endif // QUERYCHARACTER_H
