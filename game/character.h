#ifndef CHARACTER_H
#define CHARACTER_H

#include "statisticsmap.h"
#include "DataBase/querystatsmanager.h"

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

    int getStat(Language_t type);

private:

    QueryStatsManager *queryManager;

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
};

#endif // CHARACTER_H
