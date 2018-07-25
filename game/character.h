#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class Character
{
public:
    Character();

private:

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
};

#endif // CHARACTER_H
