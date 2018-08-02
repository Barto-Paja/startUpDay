#ifndef CHARACTER_H
#define CHARACTER_H

#include "statisticsmap.h"
#include "charactersmap.h"
#include "DataBase/querystatsmanager.h"
#include "DataBase/querycharacter.h"

#include <QString>

class Character
{
public:
    Character();
    ~Character();

    void setNature();
    void setMorals(int value);
    void setCondition();
    void setTalent(int talent);

    void setSpecialty();
    void setHero();

    void setSalary();

    void setStats(int statisticValue);
    void sendNewStats();
    int getStat(Language_t type);
    QString getPersonalityName(Character_t type);

private:

    QueryStatsManager *queryManager;
    QueryCharacter *queryChar;

    QString nameAndSurname;

// Stats

    QString nature;
    int morals;
    int condition;
    int talent;
    QString specialty;
    QString hero;

    QString firstLanguage;
    QString secondLanguage;
    QString thirdLanguage;

    int salary;
    int metascore;

    QVector<int> Stats;
};

#endif // CHARACTER_H
