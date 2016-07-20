#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QFont>
#include "class/qquickutl.h"
#include "class/datautl.h"
#include "KShareSDK.h"
#include "class/httpuploader.h"
#include <string>
#include "kapplication.h"
#include "qkit.h"

int main(int argc, char *argv[])
{
    qmlRegisterUncreatableType<HttpPostField>("HttpUp", 1, 0, "HttpPostField", "Can't touch this");
    qmlRegisterType<HttpPostFieldValue>("HttpUp", 1, 0, "HttpPostFieldValue");
    qmlRegisterType<HttpPostFieldFile>("HttpUp", 1, 0, "HttpPostFieldFile");
    qmlRegisterType<HttpUploader>("HttpUp", 1, 0, "HttpUploader");

    KApplication app(argc, argv);


    QString ss = app.applicationDirPath() + "/order.db";

    DataUtl da;
    da.instance(ss);
    QString sql = "select * from dish";
    da.queryRecord(sql);


    QFont font;
    font.setFamily("黑体");
    app.setFont(font);
    QQmlApplicationEngine engine;
    QKit::registerTypes(&engine);

//    engine.rootContext()->setContextProperty("DataUtl", DataUtl::instance());
    engine.rootContext()->setContextProperty("Utl", QQuickUtl::instance());
    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    return app.exec();
}
