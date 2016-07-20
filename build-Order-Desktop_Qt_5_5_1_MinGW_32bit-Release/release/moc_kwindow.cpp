/****************************************************************************
** Meta object code from reading C++ file 'kwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KWindow_t {
    QByteArrayData data[9];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KWindow_t qt_meta_stringdata_KWindow = {
    {
QT_MOC_LITERAL(0, 0, 7), // "KWindow"
QT_MOC_LITERAL(1, 8, 18), // "afterSynchronizing"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 22), // "activeFocusItemChanged"
QT_MOC_LITERAL(4, 51, 11), // "QQuickItem*"
QT_MOC_LITERAL(5, 63, 15), // "activeFocusItem"
QT_MOC_LITERAL(6, 79, 14), // "afterAnimating"
QT_MOC_LITERAL(7, 94, 21), // "sceneGraphAboutToStop"
QT_MOC_LITERAL(8, 116, 24) // "p_activeFocusItemChanged"

    },
    "KWindow\0afterSynchronizing\0\0"
    "activeFocusItemChanged\0QQuickItem*\0"
    "activeFocusItem\0afterAnimating\0"
    "sceneGraphAboutToStop\0p_activeFocusItemChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,
       7,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void KWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KWindow *_t = static_cast<KWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->afterSynchronizing(); break;
        case 1: _t->activeFocusItemChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: _t->afterAnimating(); break;
        case 3: _t->sceneGraphAboutToStop(); break;
        case 4: _t->p_activeFocusItemChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (KWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindow::afterSynchronizing)) {
                *result = 0;
            }
        }
        {
            typedef void (KWindow::*_t)(QQuickItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindow::activeFocusItemChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (KWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindow::afterAnimating)) {
                *result = 2;
            }
        }
        {
            typedef void (KWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KWindow::sceneGraphAboutToStop)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject KWindow::staticMetaObject = {
    { &QQuickWindow::staticMetaObject, qt_meta_stringdata_KWindow.data,
      qt_meta_data_KWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KWindow.stringdata0))
        return static_cast<void*>(const_cast< KWindow*>(this));
    return QQuickWindow::qt_metacast(_clname);
}

int KWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KWindow::afterSynchronizing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void KWindow::activeFocusItemChanged(QQuickItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KWindow::afterAnimating()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void KWindow::sceneGraphAboutToStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
