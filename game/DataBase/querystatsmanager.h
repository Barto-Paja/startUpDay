#ifndef QUERYSTATSMANAGER_H
#define QUERYSTATSMANAGER_H

#include "databasemanagementlite.h"

#include <QSqlQuery>

class QueryStatsManager : public DataBaseManagementLite
{
public:
    QueryStatsManager();
    ~QueryStatsManager();

    bool getStat();
    int showStat(int columnValue);

private:

    QSqlQuery *query;

};

#endif // QUERYSTATSMANAGER_H
