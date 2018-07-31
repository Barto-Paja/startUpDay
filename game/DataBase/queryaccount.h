#ifndef QUERYACCOUNT_H
#define QUERYACCOUNT_H

#include "databasemanagementlite.h"
#include <QSqlQuery>

class QueryAccount : public DataBaseManagementLite
{
public:
    QueryAccount();
    ~QueryAccount();

    bool login(QString &login, QString &password);

private:
    QSqlQuery *query;
};

#endif // QUERYACCOUNT_H
