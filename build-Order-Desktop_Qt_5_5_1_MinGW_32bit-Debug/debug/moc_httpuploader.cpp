/****************************************************************************
** Meta object code from reading C++ file 'httpuploader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Order/class/httpuploader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpuploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HttpPostField_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpPostField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpPostField_t qt_meta_stringdata_HttpPostField = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HttpPostField"
QT_MOC_LITERAL(1, 14, 11), // "nameChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "contentLengthChanged"
QT_MOC_LITERAL(4, 48, 4), // "name"
QT_MOC_LITERAL(5, 53, 4), // "type"
QT_MOC_LITERAL(6, 58, 9), // "FieldType"
QT_MOC_LITERAL(7, 68, 13), // "contentLength"
QT_MOC_LITERAL(8, 82, 12), // "FieldInvalid"
QT_MOC_LITERAL(9, 95, 10), // "FieldValue"
QT_MOC_LITERAL(10, 106, 9) // "FieldFile"

    },
    "HttpPostField\0nameChanged\0\0"
    "contentLengthChanged\0name\0type\0FieldType\0"
    "contentLength\0FieldInvalid\0FieldValue\0"
    "FieldFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpPostField[] = {

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
       8, uint(HttpPostField::FieldInvalid),
       9, uint(HttpPostField::FieldValue),
      10, uint(HttpPostField::FieldFile),

       0        // eod
};

void HttpPostField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpPostField *_t = static_cast<HttpPostField *>(_o);
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
            typedef void (HttpPostField::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpPostField::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (HttpPostField::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpPostField::contentLengthChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpPostField *_t = static_cast<HttpPostField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< FieldType*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->contentLength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpPostField *_t = static_cast<HttpPostField *>(_o);
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

const QMetaObject HttpPostField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpPostField.data,
      qt_meta_data_HttpPostField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpPostField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpPostField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpPostField.stringdata0))
        return static_cast<void*>(const_cast< HttpPostField*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpPostField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HttpPostField::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HttpPostField::contentLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_HttpPostFieldValue_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpPostFieldValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpPostFieldValue_t qt_meta_stringdata_HttpPostFieldValue = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HttpPostFieldValue"
QT_MOC_LITERAL(1, 19, 12), // "valueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5) // "value"

    },
    "HttpPostFieldValue\0valueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpPostFieldValue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void HttpPostFieldValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpPostFieldValue *_t = static_cast<HttpPostFieldValue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpPostFieldValue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpPostFieldValue::valueChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpPostFieldValue *_t = static_cast<HttpPostFieldValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpPostFieldValue *_t = static_cast<HttpPostFieldValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject HttpPostFieldValue::staticMetaObject = {
    { &HttpPostField::staticMetaObject, qt_meta_stringdata_HttpPostFieldValue.data,
      qt_meta_data_HttpPostFieldValue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpPostFieldValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpPostFieldValue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpPostFieldValue.stringdata0))
        return static_cast<void*>(const_cast< HttpPostFieldValue*>(this));
    return HttpPostField::qt_metacast(_clname);
}

int HttpPostFieldValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpPostField::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void HttpPostFieldValue::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_HttpPostFieldFile_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpPostFieldFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpPostFieldFile_t qt_meta_stringdata_HttpPostFieldFile = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HttpPostFieldFile"
QT_MOC_LITERAL(1, 18, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "mimeTypeChanged"
QT_MOC_LITERAL(4, 49, 6), // "source"
QT_MOC_LITERAL(5, 56, 8) // "mimeType"

    },
    "HttpPostFieldFile\0sourceChanged\0\0"
    "mimeTypeChanged\0source\0mimeType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpPostFieldFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
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
       4, QMetaType::QUrl, 0x00495103,
       5, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void HttpPostFieldFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpPostFieldFile *_t = static_cast<HttpPostFieldFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->mimeTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpPostFieldFile::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpPostFieldFile::sourceChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (HttpPostFieldFile::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpPostFieldFile::mimeTypeChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpPostFieldFile *_t = static_cast<HttpPostFieldFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->mimeType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpPostFieldFile *_t = static_cast<HttpPostFieldFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setMimeType(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject HttpPostFieldFile::staticMetaObject = {
    { &HttpPostField::staticMetaObject, qt_meta_stringdata_HttpPostFieldFile.data,
      qt_meta_data_HttpPostFieldFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpPostFieldFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpPostFieldFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpPostFieldFile.stringdata0))
        return static_cast<void*>(const_cast< HttpPostFieldFile*>(this));
    return HttpPostField::qt_metacast(_clname);
}

int HttpPostFieldFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpPostField::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void HttpPostFieldFile::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HttpPostFieldFile::mimeTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_HttpUploader_t {
    QByteArrayData data[36];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpUploader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpUploader_t qt_meta_stringdata_HttpUploader = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HttpUploader"
QT_MOC_LITERAL(1, 13, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 29, 10), // "postFields"
QT_MOC_LITERAL(3, 40, 10), // "urlChanged"
QT_MOC_LITERAL(4, 51, 0), // ""
QT_MOC_LITERAL(5, 52, 15), // "progressChanged"
QT_MOC_LITERAL(6, 68, 12), // "stateChanged"
QT_MOC_LITERAL(7, 81, 13), // "statusChanged"
QT_MOC_LITERAL(8, 95, 5), // "clear"
QT_MOC_LITERAL(9, 101, 4), // "open"
QT_MOC_LITERAL(10, 106, 3), // "url"
QT_MOC_LITERAL(11, 110, 4), // "send"
QT_MOC_LITERAL(12, 115, 8), // "sendFile"
QT_MOC_LITERAL(13, 124, 8), // "fileName"
QT_MOC_LITERAL(14, 133, 5), // "abort"
QT_MOC_LITERAL(15, 139, 8), // "addField"
QT_MOC_LITERAL(16, 148, 9), // "fieldName"
QT_MOC_LITERAL(17, 158, 10), // "fieldValue"
QT_MOC_LITERAL(18, 169, 7), // "addFile"
QT_MOC_LITERAL(19, 177, 8), // "mimeType"
QT_MOC_LITERAL(20, 186, 14), // "reply_finished"
QT_MOC_LITERAL(21, 201, 14), // "uploadProgress"
QT_MOC_LITERAL(22, 216, 9), // "bytesSent"
QT_MOC_LITERAL(23, 226, 10), // "bytesTotal"
QT_MOC_LITERAL(24, 237, 31), // "QQmlListProperty<HttpPostField>"
QT_MOC_LITERAL(25, 269, 8), // "progress"
QT_MOC_LITERAL(26, 278, 11), // "uploadState"
QT_MOC_LITERAL(27, 290, 5), // "State"
QT_MOC_LITERAL(28, 296, 6), // "status"
QT_MOC_LITERAL(29, 303, 11), // "errorString"
QT_MOC_LITERAL(30, 315, 12), // "responseText"
QT_MOC_LITERAL(31, 328, 6), // "Unsent"
QT_MOC_LITERAL(32, 335, 6), // "Opened"
QT_MOC_LITERAL(33, 342, 7), // "Loading"
QT_MOC_LITERAL(34, 350, 8), // "Aborting"
QT_MOC_LITERAL(35, 359, 4) // "Done"

    },
    "HttpUploader\0DefaultProperty\0postFields\0"
    "urlChanged\0\0progressChanged\0stateChanged\0"
    "statusChanged\0clear\0open\0url\0send\0"
    "sendFile\0fileName\0abort\0addField\0"
    "fieldName\0fieldValue\0addFile\0mimeType\0"
    "reply_finished\0uploadProgress\0bytesSent\0"
    "bytesTotal\0QQmlListProperty<HttpPostField>\0"
    "progress\0uploadState\0State\0status\0"
    "errorString\0responseText\0Unsent\0Opened\0"
    "Loading\0Aborting\0Done"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpUploader[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      14,   16, // methods
       8,  122, // properties
       1,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   86,    4, 0x06 /* Public */,
       5,    0,   87,    4, 0x06 /* Public */,
       6,    0,   88,    4, 0x06 /* Public */,
       7,    0,   89,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   90,    4, 0x0a /* Public */,
       9,    1,   91,    4, 0x0a /* Public */,
      11,    0,   94,    4, 0x0a /* Public */,
      12,    1,   95,    4, 0x0a /* Public */,
      14,    0,   98,    4, 0x0a /* Public */,
      15,    2,   99,    4, 0x0a /* Public */,
      18,    3,  104,    4, 0x0a /* Public */,
      18,    2,  111,    4, 0x2a /* Public | MethodCloned */,
      20,    0,  116,    4, 0x08 /* Private */,
      21,    2,  117,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   13,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   22,   23,

 // properties: name, type, flags
      10, QMetaType::QUrl, 0x00495103,
       2, 0x80000000 | 24, 0x00095009,
      25, QMetaType::QReal, 0x00495001,
      26, 0x80000000 | 27, 0x00495009,
      28, QMetaType::Int, 0x00495001,
      29, QMetaType::QString, 0x00095001,
      30, QMetaType::QString, 0x00095001,
       2, 0x80000000 | 24, 0x00095009,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       0,
       0,
       0,

 // enums: name, flags, count, data
      27, 0x0,    5,  158,

 // enum data: key, value
      31, uint(HttpUploader::Unsent),
      32, uint(HttpUploader::Opened),
      33, uint(HttpUploader::Loading),
      34, uint(HttpUploader::Aborting),
      35, uint(HttpUploader::Done),

       0        // eod
};

void HttpUploader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpUploader *_t = static_cast<HttpUploader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlChanged(); break;
        case 1: _t->progressChanged(); break;
        case 2: _t->stateChanged(); break;
        case 3: _t->statusChanged(); break;
        case 4: _t->clear(); break;
        case 5: _t->open((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->send(); break;
        case 7: _t->sendFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->abort(); break;
        case 9: _t->addField((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->addFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->addFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->reply_finished(); break;
        case 13: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpUploader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpUploader::urlChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (HttpUploader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpUploader::progressChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (HttpUploader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpUploader::stateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (HttpUploader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpUploader::statusChanged)) {
                *result = 3;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<HttpPostField> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpUploader *_t = static_cast<HttpUploader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QQmlListProperty<HttpPostField>*>(_v) = _t->postFields(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 3: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->status(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->responseText(); break;
        case 7: *reinterpret_cast< QQmlListProperty<HttpPostField>*>(_v) = _t->postFields(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpUploader *_t = static_cast<HttpUploader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HttpUploader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpUploader.data,
      qt_meta_data_HttpUploader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpUploader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpUploader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpUploader.stringdata0))
        return static_cast<void*>(const_cast< HttpUploader*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< HttpUploader*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< HttpUploader*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpUploader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void HttpUploader::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HttpUploader::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void HttpUploader::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void HttpUploader::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
