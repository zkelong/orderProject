#include "datautl.h"

DataUtl::DataUtl()
{

}

void DataUtl::instance(QString& dbpath)
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName(dbpath);
    qDebug() << "dbpath: " << dbpath;
}

bool DataUtl::queryRecord(QString& sql)
{
    if(_db.open())
    {
        QSqlQuery q(sql);
        QSqlRecord rec = q.record();
        qDebug() << "Number of columns: " << rec.count();   //列数(即字段数)

        int nameCol = rec.indexOf("name"); // index of the field "name"
        while (q.next())
            qDebug() << q.value(nameCol).toString(); // output all names

        _db.close();
    } else {
        qDebug() << "db not exist!!";
    }
    return true;
}

//bool op = db.open();
//if(op) {
//    QSqlQuery q("select * from dish");
//    QSqlRecord rec = q.record();
//    qDebug() << "Number of columns: " << rec.count();   //列数(即字段数)

//    int nameCol = rec.indexOf("name"); // index of the field "name"
//    while (q.next())
//        qDebug() << q.value(nameCol).toString(); // output all names

//    db.close();
//} else {
//    qDebug() << "db not exist!!";
//}

