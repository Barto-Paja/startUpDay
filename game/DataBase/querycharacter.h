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
    QString showNickName(){return nickName;}
    void setNickName(QString name){nickName=std::move(name);}
    void updateNickName(QString &name);

private:

    QSqlQuery *query;
    static QString nickName;

    QString getnickName();


};

#endif // QUERYCHARACTER_H
