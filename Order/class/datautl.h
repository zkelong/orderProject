#ifndef DATAUTL_H
#define DATAUTL_H

#include <QObject>
#include <Qtsql/QSqlDatabase>
#include <Qtsql/QSqlQuery>
#include <QtCore/QCoreApplication>
#include <Qtsql/QSqlRecord>

#include <iostream>
#include <QDebug>

class DataUtl : public QObject
{
//    Q_OBJECT
public:
    DataUtl();

    void instance(QString& dbpath);

//    Q_INVOKABLE bool insertRecord(QString * sql);
//    Q_INVOKABLE bool deleteRecord(QString * sql);
    Q_INVOKABLE bool queryRecord(QString& sql);

private:
    QSqlDatabase _db;
};

#endif // DATAUTL_H
