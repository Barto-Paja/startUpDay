#include "databasemanagementlite.h"

QSqlDatabase DataBaseManagementLite::db = QSqlDatabase::addDatabase("QOCI");
int DataBaseManagementLite::login = 0;

DataBaseManagementLite::DataBaseManagementLite()
{
    db.setDatabaseName(QString(QCoreApplication::applicationDirPath()+"/test.db"));
    db.isOpen();
    if(!db.isOpen()){
        db.open();
    }
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
    if(db.isOpen()){
        return true;
        qDebug() << "Tu";
    }
    else{

        if(db.open()){
            return true;
            qDebug() << "Tuu";
        }
        else
            return false;
    }

    return false;
}
