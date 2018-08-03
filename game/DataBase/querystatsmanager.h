#ifndef QUERYSTATSMANAGER_H
#define QUERYSTATSMANAGER_H

#include "databasemanagementlite.h"
#include "statisticsmap.h"

#include <QSqlQuery>

class QueryStatsManager : public DataBaseManagementLite
{
public:
    QueryStatsManager();
    ~QueryStatsManager();

    bool getStat();
    int showStat(int columnValue);
    void setStats(QVector<int> &Stats);

private:

    QSqlQuery *query;

};

#endif // QUERYSTATSMANAGER_H
