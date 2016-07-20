/****************************************************************************
** Meta object code from reading C++ file 'khttpfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/http/khttpfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'khttpfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KHttpField_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KHttpField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KHttpField_t qt_meta_stringdata_KHttpField = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KHttpField"
QT_MOC_LITERAL(1, 11, 11), // "nameChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "contentLengthChanged"
QT_MOC_LITERAL(4, 45, 4), // "name"
QT_MOC_LITERAL(5, 50, 4), // "type"
QT_MOC_LITERAL(6, 55, 9), // "FieldType"
QT_MOC_LITERAL(7, 65, 13), // "contentLength"
QT_MOC_LITERAL(8, 79, 12), // "FieldInvalid"
QT_MOC_LITERAL(9, 92, 10), // "FieldValue"
QT_MOC_LITERAL(10, 103, 9) // "FieldFile"

    },
    "KHttpField\0nameChanged\0\0contentLengthChanged\0"
    "name\0type\0FieldType\0contentLength\0"
    "FieldInvalid\0FieldValue\0FieldFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KHttpField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00495103,
       5, 0x80000000 | 6, 0x00095c09,
       7, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,

 // enums: name, flags, count, data
       6, 0x0,    3,   42,

 // enum data: key, value
       8, uint(KHttpField::FieldInvalid),
       9, uint(KHttpField::FieldValue),
      10, uint(KHttpField::FieldFile),

       0        // eod
};

void KHttpField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KHttpField *_t = static_cast<KHttpField *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->contentLengthChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KHttpField::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KHttpField::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (KHttpField::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KHttpField::contentLengthChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KHttpField *_t = static_cast<KHttpField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< FieldType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->contentLength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KHttpField *_t = static_cast<KHttpField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject KHttpField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KHttpField.data,
      qt_meta_data_KHttpField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KHttpField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KHttpField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KHttpField.stringdata0))
        return static_cast<void*>(const_cast< KHttpField*>(this));
    return QObject::qt_metacast(_clname);
}

int KHttpField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KHttpField::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void KHttpField::contentLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
