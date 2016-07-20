/****************************************************************************
** Meta object code from reading C++ file 'qquickutl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/class/qquickutl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickutl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickUtl_t {
    QByteArrayData data[9];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickUtl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickUtl_t qt_meta_stringdata_QQuickUtl = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QQuickUtl"
QT_MOC_LITERAL(1, 10, 2), // "dp"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 5), // "pixel"
QT_MOC_LITERAL(4, 20, 4), // "grab"
QT_MOC_LITERAL(5, 25, 12), // "QQuickImage*"
QT_MOC_LITERAL(6, 38, 4), // "item"
QT_MOC_LITERAL(7, 43, 11), // "focusObject"
QT_MOC_LITERAL(8, 55, 7) // "dpScale"

    },
    "QQuickUtl\0dp\0\0pixel\0grab\0QQuickImage*\0"
    "item\0focusObject\0dpScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickUtl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    0,   37,    2, 0x02 /* Public */,
       4,    1,   38,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Double, QMetaType::Double,    3,
    QMetaType::QString,
    QMetaType::QString, 0x80000000 | 5,    6,
    QMetaType::QObjectStar,

 // properties: name, type, flags
       8, QMetaType::Double, 0x00095001,

       0        // eod
};

void QQuickUtl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickUtl *_t = static_cast<QQuickUtl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { double _r = _t->dp((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->grab();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->grab((*reinterpret_cast< QQuickImage*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QObject* _r = _t->focusObject();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickUtl *_t = static_cast<QQuickUtl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->dpScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickUtl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickUtl.data,
      qt_meta_data_QQuickUtl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickUtl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickUtl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickUtl.stringdata0))
        return static_cast<void*>(const_cast< QQuickUtl*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickUtl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
