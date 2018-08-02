#include "queryaccount.h"

QueryAccount::QueryAccount()
{

}

QueryAccount::~QueryAccount()
{

}

bool QueryAccount::login(QString &login, QString &password)
{
    if(open()){
        qDebug() << "True";
    }

    QSqlQuery query(db);

    query.prepare("SELECT ID FROM Player WHERE LOGIN = :login AND PASSWORD = :password LIMIT 1");
    query.bindValue(":login",login);
    query.bindValue(":password", password);

    if(query.exec() && query.next()){
        DataBaseManagementLite::setID(query.value("ID").toInt());
        return true;
    }

    return false;
}
