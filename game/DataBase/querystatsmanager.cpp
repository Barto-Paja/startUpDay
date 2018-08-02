#include "querystatsmanager.h"

//QSqlQuery QueryStatsManager::query = new QSqlQuery(DataBaseManagementLite::getDataBase());

QueryStatsManager::QueryStatsManager()
{
    query  = new QSqlQuery(db);
}

QueryStatsManager::~QueryStatsManager()
{
    delete query;
}

bool QueryStatsManager::getStat()
{

    if(!open()){
        return false;
    }

    query->prepare("SELECT * FROM STATISTICS WHERE ID_CHARACHTER = :charId");
    query->bindValue(":charId",getLogin());

    if(query->exec() && query->next()){
       return true;
    }
    else{
        qDebug() << query->lastError();
        return false;
    }

}

int QueryStatsManager::showStat(int columnValue)
{
    return query->value(std::move(columnValue)).toInt();
}
