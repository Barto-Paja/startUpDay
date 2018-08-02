#include "querystatsmanager.h"

//QSqlQuery QueryStatsManager::query = new QSqlQuery(DataBaseManagementLite::getDataBase());

QueryStatsManager::QueryStatsManager()
{

}

QueryStatsManager::~QueryStatsManager()
{

}

bool QueryStatsManager::getStat()
{

//    query->prepare("SELECT * FROM STATISTICS WHERE ID_CHARACTER = :charId");
//    query->bindValue(":charId",DataBaseManagementLite::getLogin());

//    if(query->exec() && query->next()){
//       return true;
//    }
//    else
//        return false;
}

int QueryStatsManager::showStat(int columnValue)
{
//    return query->value(std::move(columnValue)).toInt();
}
