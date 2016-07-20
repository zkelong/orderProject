/****************************************************************************
** Meta object code from reading C++ file 'kwindoweventlistenner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kwindoweventlistenner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwindoweventlistenner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KWindowEventListenner_t {
    QByteArrayData data[16];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KWindowEventListenner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KWindowEventListenner_t qt_meta_stringdata_KWindowEventListenner = {
    {
QT_MOC_LITERAL(0, 0, 21), // "KWindowEventListenner"
QT_MOC_LITERAL(1, 22, 13), // "keyPressEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "QQuickWindow*"
QT_MOC_LITERAL(4, 51, 6), // "window"
QT_MOC_LITERAL(5, 58, 10), // "KKeyEvent*"
QT_MOC_LITERAL(6, 69, 5), // "event"
QT_MOC_LITERAL(7, 75, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(8, 91, 15), // "mousePressEvent"
QT_MOC_LITERAL(9, 107, 12), // "KMouseEvent*"
QT_MOC_LITERAL(10, 120, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(11, 138, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(12, 160, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(13, 175, 22), // "activeFocusItemChanged"
QT_MOC_LITERAL(14, 198, 11), // "QQuickItem*"
QT_MOC_LITERAL(15, 210, 15) // "activeFocusItem"

    },
    "KWindowEventListenner\0keyPressEvent\0"
    "\0QQuickWindow*\0window\0KKeyEvent*\0event\0"
    "keyReleaseEvent\0mousePressEvent\0"
    "KMouseEvent*\0mouseReleaseEvent\0"
    "mouseDoubleClickEvent\0mouseMoveEvent\0"
    "activeFocusItemChanged\0QQuickItem*\0"
    "activeFocusItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KWindowEventListenner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       7,    2,   54,    2, 0x06 /* Public */,
       8,    2,   59,    2, 0x06 /* Public */,
      10,    2,   64,    2, 0x06 /* Public */,
      11,    2,   69,    2, 0x06 /* Public */,
      12,    2,   74,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,    6,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void KWindowEventListenner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KWindowEventListenner *_t = static_cast<KWindowEventListenner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressEvent((*reinterpret_cast< QQuickWindow*(*)>(_a[1])),(*reinterpret_cast< KKeyEvent*(*)>(_a[2]))); break;
        case 1: _t->keyReleaseEvent((*reinterpret_cast< QQuickWindow*(*)>(_a[1])),(*reinterpret_cast< KKeyEvent*(*)>(_a[2]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QQuickWindow*(*)>(_a[1])),(*reinterpret_cast< KMouseEvent*(*)>(_a[2]))); break;
        case 3: _t->mouseReleaseEvent((*reinterpret_cast< QQuickWindow*(*)>(_a[1])),(*reinterpret_cast< KMouseEvent*(*)>(_a[2]))); break;
        case 4: _t->mouseDoubleClickEvent((*reinterpret_cast< QQuickWindow*(*)>(_a[1])),(*reinterpret_cast< KMouseEvent*(*)>(_a[2]))); break;
        case 5: _t->mouseMoveEvent((*reinterpret_cast< QQuickWindow*(*)>(_a[1])),(*reinterpret_cast< KMouseEvent*(*)>(_a[2]))); break;
        case 6: _t->activeFocusItemChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KKeyEvent* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KKeyEvent* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KMouseEvent* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KMouseEvent* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KMouseEvent* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KMouseEvent* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KWindowEventListenner::*_t)(QQuickWindow * , KKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::keyPressEvent)) {
                *result = 0;
            }
        }
        {
            typedef void (KWindowEventListenner::*_t)(QQuickWindow * , KKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::keyReleaseEvent)) {
                *result = 1;
            }
        }
        {
            typedef void (KWindowEventListenner::*_t)(QQuickWindow * , KMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::mousePressEvent)) {
                *result = 2;
            }
        }
        {
            typedef void (KWindowEventListenner::*_t)(QQuickWindow * , KMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::mouseReleaseEvent)) {
                *result = 3;
            }
        }
        {
            typedef void (KWindowEventListenner::*_t)(QQuickWindow * , KMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::mouseDoubleClickEvent)) {
                *result = 4;
            }
        }
        {
            typedef void (KWindowEventListenner::*_t)(QQuickWindow * , KMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::mouseMoveEvent)) {
                *result = 5;
            }
        }
        {
            typedef void (KWindowEventListenner::*_t)(QQuickItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindowEventListenner::activeFocusItemChanged)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject KWindowEventListenner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KWindowEventListenner.data,
      qt_meta_data_KWindowEventListenner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KWindowEventListenner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWindowEventListenner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KWindowEventListenner.stringdata0))
        return static_cast<void*>(const_cast< KWindowEventListenner*>(this));
    return QObject::qt_metacast(_clname);
}

int KWindowEventListenner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWindowEventListenner::keyPressEvent(QQuickWindow * _t1, KKeyEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KWindowEventListenner::keyReleaseEvent(QQuickWindow * _t1, KKeyEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KWindowEventListenner::mousePressEvent(QQuickWindow * _t1, KMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KWindowEventListenner::mouseReleaseEvent(QQuickWindow * _t1, KMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KWindowEventListenner::mouseDoubleClickEvent(QQuickWindow * _t1, KMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KWindowEventListenner::mouseMoveEvent(QQuickWindow * _t1, KMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KWindowEventListenner::activeFocusItemChanged(QQuickItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
