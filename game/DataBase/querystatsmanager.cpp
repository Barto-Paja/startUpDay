#include "querystatsmanager.h"

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

void QueryStatsManager::setStats(QVector<int> &Stats)
{
    query->prepare("UPDATE STATISTICS SET "
                   "Assembler = :assembler, C_lang = :cpoints, C_sharp = :csharp,"
                   "Cpp = :cpp, GoLang = :golang, Haskell = :haskell,"
                   "Java = :java, JavaScript = :javas, MatLab = :matlab,"
                   "Objective_C = :objectiveC, Perl = :perl, PHP = :php,"
                   "Python = :python, R = :rlang, Ruby = :ruby, SQL = :sql, "
                   "Swift = :swift, VBA = :vba, Others = :others, Talent = :talent "
                   "WHERE ID = :idPlayer");
    query->bindValue(":assembler",Stats[0]);
    query->bindValue(":cpoints",Stats[1]);
    query->bindValue(":csharp",Stats[2]);
    query->bindValue(":cpp",Stats[3]);
    query->bindValue(":golang",Stats[4]);
    query->bindValue(":haskell",Stats[5]);
    query->bindValue(":java",Stats[6]);
    query->bindValue(":javas",Stats[7]);
    query->bindValue(":matlab",Stats[8]);
    query->bindValue(":objectiveC",Stats[9]);
    query->bindValue(":perl",Stats[10]);
    query->bindValue(":php",Stats[11]);
    query->bindValue(":python",Stats[12]);
    query->bindValue(":rlang",Stats[13]);
    query->bindValue(":ruby",Stats[14]);
    query->bindValue(":sql",Stats[15]);
    query->bindValue(":swift",Stats[16]);
    query->bindValue(":vba",Stats[17]);
    query->bindValue(":others",Stats[18]);
    query->bindValue(":talent",Stats[19]);
    query->bindValue(":idPlayer",getLogin());

    if(!query->exec()){
        qDebug() << query->lastError().text();
        return;
    }
}

bool QueryStatsManager::getRobotStats()
{
    query->prepare("SELECT * FROM ROBOT WHERE ID = :idPlayer");
    query->bindValue(":idPlayer",getLogin());

    if(query->exec() && query->next()){
       return true;
    }
    else{
        qDebug() << query->lastError();
        return false;
    }
}
