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



};

#endif // QUERYSTATSMANAGER_H
