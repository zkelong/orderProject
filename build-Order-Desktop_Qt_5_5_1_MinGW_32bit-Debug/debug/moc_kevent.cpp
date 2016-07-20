/****************************************************************************
** Meta object code from reading C++ file 'kevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KKeyEvent_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KKeyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KKeyEvent_t qt_meta_stringdata_KKeyEvent = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KKeyEvent"
QT_MOC_LITERAL(1, 10, 7), // "matches"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 25), // "QKeySequence::StandardKey"
QT_MOC_LITERAL(4, 45, 3), // "key"
QT_MOC_LITERAL(5, 49, 4), // "text"
QT_MOC_LITERAL(6, 54, 9), // "modifiers"
QT_MOC_LITERAL(7, 64, 12), // "isAutoRepeat"
QT_MOC_LITERAL(8, 77, 5), // "count"
QT_MOC_LITERAL(9, 83, 14), // "nativeScanCode"
QT_MOC_LITERAL(10, 98, 8) // "accepted"

    },
    "KKeyEvent\0matches\0\0QKeySequence::StandardKey\0"
    "key\0text\0modifiers\0isAutoRepeat\0count\0"
    "nativeScanCode\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KKeyEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00095001,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::Int, 0x00095001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Int, 0x00095001,
       9, QMetaType::UInt, 0x00095001,
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KKeyEvent *_t = static_cast<KKeyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->matches((*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KKeyEvent *_t = static_cast<KKeyEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAutoRepeat(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->nativeScanCode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KKeyEvent *_t = static_cast<KKeyEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject KKeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KKeyEvent.data,
      qt_meta_data_KKeyEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KKeyEvent.stringdata0))
        return static_cast<void*>(const_cast< KKeyEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int KKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_KMouseEvent_t {
    QByteArrayData data[9];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMouseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMouseEvent_t qt_meta_stringdata_KMouseEvent = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KMouseEvent"
QT_MOC_LITERAL(1, 12, 1), // "x"
QT_MOC_LITERAL(2, 14, 1), // "y"
QT_MOC_LITERAL(3, 16, 6), // "button"
QT_MOC_LITERAL(4, 23, 7), // "buttons"
QT_MOC_LITERAL(5, 31, 9), // "modifiers"
QT_MOC_LITERAL(6, 41, 7), // "wasHeld"
QT_MOC_LITERAL(7, 49, 7), // "isClick"
QT_MOC_LITERAL(8, 57, 13) // "isDoubleClick"

    },
    "KMouseEvent\0x\0y\0button\0buttons\0modifiers\0"
    "wasHeld\0isClick\0isDoubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMouseEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, QMetaType::Int, 0x00095001,
       4, QMetaType::Int, 0x00095001,
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::Bool, 0x00095001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Bool, 0x00095001,

       0        // eod
};

void KMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        KMouseEvent *_t = static_cast<KMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->button(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->wasHeld(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isClick(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isDoubleClick(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject KMouseEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KMouseEvent.data,
      qt_meta_data_KMouseEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KMouseEvent.stringdata0))
        return static_cast<void*>(const_cast< KMouseEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int KMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
