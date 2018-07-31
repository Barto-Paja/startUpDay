#include "databasemanagementlite.h"

QSqlDatabase DataBaseManagementLite::db = QSqlDatabase::addDatabase("QSQLITE");

DataBaseManagementLite::DataBaseManagementLite()
{
    db.setDatabaseName(QString(QCoreApplication::applicationDirPath()+"/test.db"));
    qDebug() << db.open();
}
