/****************************************************************************
** Meta object code from reading C++ file 'kalipay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kalipay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kalipay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KAlipay_t {
    QByteArrayData data[13];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KAlipay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KAlipay_t qt_meta_stringdata_KAlipay = {
    {
QT_MOC_LITERAL(0, 0, 7), // "KAlipay"
QT_MOC_LITERAL(1, 8, 4), // "init"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "partner"
QT_MOC_LITERAL(4, 22, 6), // "seller"
QT_MOC_LITERAL(5, 29, 10), // "privateKey"
QT_MOC_LITERAL(6, 40, 12), // "iosNotifyUrl"
QT_MOC_LITERAL(7, 53, 12), // "iosAppScheme"
QT_MOC_LITERAL(8, 66, 3), // "pay"
QT_MOC_LITERAL(9, 70, 7), // "tradeNO"
QT_MOC_LITERAL(10, 78, 11), // "productName"
QT_MOC_LITERAL(11, 90, 18), // "productDescription"
QT_MOC_LITERAL(12, 109, 6) // "amount"

    },
    "KAlipay\0init\0\0partner\0seller\0privateKey\0"
    "iosNotifyUrl\0iosAppScheme\0pay\0tradeNO\0"
    "productName\0productDescription\0amount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KAlipay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    5,   29,    2, 0x02 /* Public */,
       1,    4,   40,    2, 0x22 /* Public | MethodCloned */,
       8,    4,   49,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,   12,

       0        // eod
};

void KAlipay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KAlipay *_t = static_cast<KAlipay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->init((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->pay((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject KAlipay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KAlipay.data,
      qt_meta_data_KAlipay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KAlipay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KAlipay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KAlipay.stringdata0))
        return static_cast<void*>(const_cast< KAlipay*>(this));
    return QObject::qt_metacast(_clname);
}

int KAlipay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
