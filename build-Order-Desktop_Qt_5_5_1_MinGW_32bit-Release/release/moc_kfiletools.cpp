/****************************************************************************
** Meta object code from reading C++ file 'kfiletools.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kfiletools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kfiletools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KFileTools_t {
    QByteArrayData data[9];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KFileTools_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KFileTools_t qt_meta_stringdata_KFileTools = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KFileTools"
QT_MOC_LITERAL(1, 11, 12), // "readablePath"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "path"
QT_MOC_LITERAL(4, 30, 10), // "assetsPath"
QT_MOC_LITERAL(5, 41, 7), // "srcPath"
QT_MOC_LITERAL(6, 49, 9), // "assetsUrl"
QT_MOC_LITERAL(7, 59, 11), // "rotateImage"
QT_MOC_LITERAL(8, 71, 5) // "angle"

    },
    "KFileTools\0readablePath\0\0path\0assetsPath\0"
    "srcPath\0assetsUrl\0rotateImage\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KFileTools[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    1,   37,    2, 0x02 /* Public */,
       6,    1,   40,    2, 0x02 /* Public */,
       7,    2,   43,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::QUrl, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::QReal,    3,    8,

       0        // eod
};

void KFileTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KFileTools *_t = static_cast<KFileTools *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->readablePath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->assetsPath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QUrl _r = _t->assetsUrl((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->rotateImage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject KFileTools::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KFileTools.data,
      qt_meta_data_KFileTools,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KFileTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KFileTools::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KFileTools.stringdata0))
        return static_cast<void*>(const_cast< KFileTools*>(this));
    return QObject::qt_metacast(_clname);
}

int KFileTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
