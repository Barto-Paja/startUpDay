#include "databasemanagementlite.h"

QSqlDatabase DataBaseManagementLite::db = QSqlDatabase::addDatabase("QSQLITE");
int DataBaseManagementLite::login = 0;

DataBaseManagementLite::DataBaseManagementLite()
{
    db.setDatabaseName(QString(QCoreApplication::applicationDirPath()+"/test.db"));
    //qDebug() << db.open();
}

QSqlDatabase DataBaseManagementLite::getDataBase()
{
    return db;
}

int DataBaseManagementLite::getLogin()
{
    return login;
}

bool DataBaseManagementLite::open()
{
    if(db.open()){
        return true;
    }
    else
        return false;

}
