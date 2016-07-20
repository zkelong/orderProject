/****************************************************************************
** Meta object code from reading C++ file 'kjpush.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kjpush.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kjpush.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KJPush_t {
    QByteArrayData data[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KJPush_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KJPush_t qt_meta_stringdata_KJPush = {
    {
QT_MOC_LITERAL(0, 0, 6), // "KJPush"
QT_MOC_LITERAL(1, 7, 4), // "init"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 12), // "setDebugMode"
QT_MOC_LITERAL(4, 26, 5), // "value"
QT_MOC_LITERAL(5, 32, 8), // "setAlias"
QT_MOC_LITERAL(6, 41, 5), // "alias"
QT_MOC_LITERAL(7, 47, 7), // "setTags"
QT_MOC_LITERAL(8, 55, 4), // "tags"
QT_MOC_LITERAL(9, 60, 21) // "clearAllNotifications"

    },
    "KJPush\0init\0\0setDebugMode\0value\0"
    "setAlias\0alias\0setTags\0tags\0"
    "clearAllNotifications"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KJPush[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x02 /* Public */,
       3,    1,   40,    2, 0x02 /* Public */,
       5,    1,   43,    2, 0x02 /* Public */,
       7,    1,   46,    2, 0x02 /* Public */,
       9,    0,   49,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QVariantList,    8,
    QMetaType::Void,

       0        // eod
};

void KJPush::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KJPush *_t = static_cast<KJPush *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->setDebugMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setAlias((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setTags((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 4: _t->clearAllNotifications(); break;
        default: ;
        }
    }
}

const QMetaObject KJPush::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KJPush.data,
      qt_meta_data_KJPush,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KJPush::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KJPush::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KJPush.stringdata0))
        return static_cast<void*>(const_cast< KJPush*>(this));
    return QObject::qt_metacast(_clname);
}

int KJPush::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
