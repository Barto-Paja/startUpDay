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

private:
    static QSqlDatabase db;
};

#endif // DATABASEMANAGEMENTLITE_H
