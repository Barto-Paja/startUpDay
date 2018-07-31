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

private:
    static QSqlDatabase db;
    static int login;
};

#endif // DATABASEMANAGEMENTLITE_H
