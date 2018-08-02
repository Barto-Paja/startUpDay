#ifndef DATABASEMANAGEMENTLITE_H
#define DATABASEMANAGEMENTLITE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QString>
#include <QSqlError>
#include <QDate>
#include <QCoreApplication>

class DataBaseManagementLite
{
public:
    DataBaseManagementLite();
    static QSqlDatabase getDataBase();
    static int getLogin();
    static void setID(int id){login=std::move(id);}
    bool open();

    friend class QueryAccount;
    friend class QueryCharacter;
    friend class QueryStatsManager;

private:
    static QSqlDatabase db;
    static int login;
    //QSqlQuery *query;
};

#endif // DATABASEMANAGEMENTLITE_H
