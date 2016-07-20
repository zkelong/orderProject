/****************************************************************************
** Meta object code from reading C++ file 'kapplicationlistenner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kapplicationlistenner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kapplicationlistenner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KApplicationListenner_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KApplicationListenner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KApplicationListenner_t qt_meta_stringdata_KApplicationListenner = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KApplicationListenner"
QT_MOC_LITERAL(1, 22, 7), // "suspend"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "resume"
QT_MOC_LITERAL(4, 38, 4), // "exit"
QT_MOC_LITERAL(5, 43, 9) // "heartbeat"

    },
    "KApplicationListenner\0suspend\0\0resume\0"
    "exit\0heartbeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KApplicationListenner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KApplicationListenner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KApplicationListenner *_t = static_cast<KApplicationListenner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->suspend(); break;
        case 1: _t->resume(); break;
        case 2: _t->exit(); break;
        case 3: _t->heartbeat(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KApplicationListenner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KApplicationListenner::suspend)) {
                *result = 0;
            }
        }
        {
            typedef void (KApplicationListenner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KApplicationListenner::resume)) {
                *result = 1;
            }
        }
        {
            typedef void (KApplicationListenner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KApplicationListenner::exit)) {
                *result = 2;
            }
        }
        {
            typedef void (KApplicationListenner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KApplicationListenner::heartbeat)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject KApplicationListenner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KApplicationListenner.data,
      qt_meta_data_KApplicationListenner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KApplicationListenner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KApplicationListenner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KApplicationListenner.stringdata0))
        return static_cast<void*>(const_cast< KApplicationListenner*>(this));
    return QObject::qt_metacast(_clname);
}

int KApplicationListenner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void KApplicationListenner::suspend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void KApplicationListenner::resume()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void KApplicationListenner::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void KApplicationListenner::heartbeat()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
