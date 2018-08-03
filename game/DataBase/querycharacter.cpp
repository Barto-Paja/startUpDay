#include "querycharacter.h"

QueryCharacter::QueryCharacter()
{
    query = new QSqlQuery(db);
}

QueryCharacter::~QueryCharacter()
{
    delete query;
}

void QueryCharacter::loadPlayerStatistics()
{
//    if(!open()){
//        qDebug() << "Query Character: DataBase Open Errro!";
//        return;
//    }

//    query->prepare("SELECT * FROM STATISTICS WHERE ID_CHARACTER = :characterid LIMIT 1");
//    query->bindValue(":characterid",DataBaseManagementLite::getLogin());

//    if(query->exec() && query->next()){
//        // i tutaj jak już dorzeźbisz bazę danych,
//        // to wtedy ch.coś ch.settamtoś
    //    }
}

void QueryCharacter::setPersonality(Character_t character)
{
    query->prepare("UPDATE CHARACHTER SET ID_PERSONALITY = :personId  WHERE ID = :idPlayer");
    query->bindValue(":personId",character);
    query->bindValue(":idPlayer",getLogin());

    if(!query->exec()){
        qDebug() << query->lastError();
        return;
    }

    return;
}

QString QueryCharacter::getPersonalityName(Character_t character)
{
    qDebug() << character;
    query->prepare("SELECT Name From Personalities WHERE ID = :personId");
    query->bindValue(":personId",character);

    if(query->exec() && query->next()){
        return query->value(0).toString();
    }
    else{
        qDebug() << query->lastError();
    }
        return QString("Eror");


}
