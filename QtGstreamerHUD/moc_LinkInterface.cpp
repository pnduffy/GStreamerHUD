/****************************************************************************
** Meta object code from reading C++ file 'LinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LinkInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LinkInterface_t {
    QByteArrayData data[24];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkInterface_t qt_meta_stringdata_LinkInterface = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 14),
QT_MOC_LITERAL(4, 44, 4),
QT_MOC_LITERAL(5, 49, 4),
QT_MOC_LITERAL(6, 54, 9),
QT_MOC_LITERAL(7, 64, 13),
QT_MOC_LITERAL(8, 78, 12),
QT_MOC_LITERAL(9, 91, 11),
QT_MOC_LITERAL(10, 103, 4),
QT_MOC_LITERAL(11, 108, 18),
QT_MOC_LITERAL(12, 127, 8),
QT_MOC_LITERAL(13, 136, 5),
QT_MOC_LITERAL(14, 142, 19),
QT_MOC_LITERAL(15, 162, 4),
QT_MOC_LITERAL(16, 167, 10),
QT_MOC_LITERAL(17, 178, 19),
QT_MOC_LITERAL(18, 198, 11),
QT_MOC_LITERAL(19, 210, 10),
QT_MOC_LITERAL(20, 221, 11),
QT_MOC_LITERAL(21, 233, 5),
QT_MOC_LITERAL(22, 239, 6),
QT_MOC_LITERAL(23, 246, 9)
    },
    "LinkInterface\0bytesReceived\0\0"
    "LinkInterface*\0link\0data\0connected\0"
    "linkInterface\0disconnected\0nameChanged\0"
    "name\0communicationError\0linkname\0error\0"
    "communicationUpdate\0text\0deleteLink\0"
    "LinkInterface*const\0errorstring\0"
    "writeBytes\0const char*\0bytes\0length\0"
    "readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       6,    0,   84,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       8,    0,   88,    2, 0x06 /* Public */,
       8,    1,   89,    2, 0x06 /* Public */,
       6,    1,   92,    2, 0x06 /* Public */,
       9,    1,   95,    2, 0x06 /* Public */,
      11,    2,   98,    2, 0x06 /* Public */,
      14,    2,  103,    2, 0x06 /* Public */,
      16,    1,  108,    2, 0x06 /* Public */,
      13,    2,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    2,  116,    2, 0x0a /* Public */,
      23,    0,  121,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   15,
    QMetaType::Void, 0x80000000 | 17,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20, QMetaType::LongLong,   21,   22,
    QMetaType::Void,

       0        // eod
};

void LinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkInterface *_t = static_cast<LinkInterface *>(_o);
        switch (_id) {
        case 0: _t->bytesReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->connected(); break;
        case 2: _t->connected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 3: _t->disconnected(); break;
        case 4: _t->disconnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 5: _t->connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->communicationError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->communicationUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->deleteLink((*reinterpret_cast< LinkInterface*const(*)>(_a[1]))); break;
        case 10: _t->error((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 12: _t->readBytes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LinkInterface::*_t)(LinkInterface * , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::bytesReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (LinkInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::connected)) {
                *result = 1;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::connected)) {
                *result = 2;
            }
        }
        {
            typedef void (LinkInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::disconnected)) {
                *result = 3;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::disconnected)) {
                *result = 4;
            }
        }
        {
            typedef void (LinkInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::connected)) {
                *result = 5;
            }
        }
        {
            typedef void (LinkInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::nameChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (LinkInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::communicationError)) {
                *result = 7;
            }
        }
        {
            typedef void (LinkInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::communicationUpdate)) {
                *result = 8;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * const );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::deleteLink)) {
                *result = 9;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkInterface::error)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject LinkInterface::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_LinkInterface.data,
      qt_meta_data_LinkInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *LinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinkInterface.stringdata))
        return static_cast<void*>(const_cast< LinkInterface*>(this));
    return QThread::qt_metacast(_clname);
}

int LinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LinkInterface::bytesReceived(LinkInterface * _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void LinkInterface::connected(LinkInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinkInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void LinkInterface::disconnected(LinkInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkInterface::connected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LinkInterface::nameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LinkInterface::communicationError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LinkInterface::communicationUpdate(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LinkInterface::deleteLink(LinkInterface * const _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LinkInterface::error(LinkInterface * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
