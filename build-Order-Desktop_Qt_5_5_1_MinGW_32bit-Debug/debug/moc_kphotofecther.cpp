/****************************************************************************
** Meta object code from reading C++ file 'kphotofecther.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/QKit/QKit/src/kphotofecther.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kphotofecther.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PhotoGroup_t {
    QByteArrayData data[3];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhotoGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhotoGroup_t qt_meta_stringdata_PhotoGroup = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PhotoGroup"
QT_MOC_LITERAL(1, 11, 4), // "name"
QT_MOC_LITERAL(2, 16, 3) // "url"

    },
    "PhotoGroup\0name\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhotoGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,

       0        // eod
};

void PhotoGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        PhotoGroup *_t = static_cast<PhotoGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_url; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PhotoGroup *_t = static_cast<PhotoGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_name != *reinterpret_cast< QString*>(_v)) {
                _t->m_name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->m_url != *reinterpret_cast< QString*>(_v)) {
                _t->m_url = *reinterpret_cast< QString*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PhotoGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PhotoGroup.data,
      qt_meta_data_PhotoGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PhotoGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhotoGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PhotoGroup.stringdata0))
        return static_cast<void*>(const_cast< PhotoGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PhotoGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_KPhotoFecther_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KPhotoFecther_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KPhotoFecther_t qt_meta_stringdata_KPhotoFecther = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KPhotoFecther"
QT_MOC_LITERAL(1, 14, 18), // "photoGroupCallback"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "PhotoGroup*"
QT_MOC_LITERAL(4, 46, 5), // "group"
QT_MOC_LITERAL(5, 52, 13), // "photoCallback"
QT_MOC_LITERAL(6, 66, 8), // "photoUrl"
QT_MOC_LITERAL(7, 75, 11), // "photoGroups"
QT_MOC_LITERAL(8, 87, 18), // "photosWithGroupUrl"
QT_MOC_LITERAL(9, 106, 3) // "url"

    },
    "KPhotoFecther\0photoGroupCallback\0\0"
    "PhotoGroup*\0group\0photoCallback\0"
    "photoUrl\0photoGroups\0photosWithGroupUrl\0"
    "url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KPhotoFecther[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   40,    2, 0x02 /* Public */,
       8,    1,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void KPhotoFecther::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KPhotoFecther *_t = static_cast<KPhotoFecther *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->photoGroupCallback((*reinterpret_cast< PhotoGroup*(*)>(_a[1]))); break;
        case 1: _t->photoCallback((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->photoGroups(); break;
        case 3: _t->photosWithGroupUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PhotoGroup* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KPhotoFecther::*_t)(PhotoGroup * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KPhotoFecther::photoGroupCallback)) {
                *result = 0;
            }
        }
        {
            typedef void (KPhotoFecther::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KPhotoFecther::photoCallback)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject KPhotoFecther::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KPhotoFecther.data,
      qt_meta_data_KPhotoFecther,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KPhotoFecther::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KPhotoFecther::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KPhotoFecther.stringdata0))
        return static_cast<void*>(const_cast< KPhotoFecther*>(this));
    return QObject::qt_metacast(_clname);
}

int KPhotoFecther::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KPhotoFecther::photoGroupCallback(PhotoGroup * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KPhotoFecther::photoCallback(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
