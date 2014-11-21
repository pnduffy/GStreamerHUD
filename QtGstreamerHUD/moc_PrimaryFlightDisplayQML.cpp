/****************************************************************************
** Meta object code from reading C++ file 'PrimaryFlightDisplayQML.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PrimaryFlightDisplayQML.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrimaryFlightDisplayQML.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PrimaryFlightDisplayQML_t {
    QByteArrayData data[28];
    char stringdata[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrimaryFlightDisplayQML_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrimaryFlightDisplayQML_t qt_meta_stringdata_PrimaryFlightDisplayQML = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 21),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 19),
QT_MOC_LITERAL(4, 67, 18),
QT_MOC_LITERAL(5, 86, 21),
QT_MOC_LITERAL(6, 108, 12),
QT_MOC_LITERAL(7, 121, 13),
QT_MOC_LITERAL(8, 135, 3),
QT_MOC_LITERAL(9, 139, 14),
QT_MOC_LITERAL(10, 154, 5),
QT_MOC_LITERAL(11, 160, 11),
QT_MOC_LITERAL(12, 172, 8),
QT_MOC_LITERAL(13, 181, 4),
QT_MOC_LITERAL(14, 186, 13),
QT_MOC_LITERAL(15, 200, 4),
QT_MOC_LITERAL(16, 205, 15),
QT_MOC_LITERAL(17, 221, 8),
QT_MOC_LITERAL(18, 230, 19),
QT_MOC_LITERAL(19, 250, 18),
QT_MOC_LITERAL(20, 269, 4),
QT_MOC_LITERAL(21, 274, 11),
QT_MOC_LITERAL(22, 286, 7),
QT_MOC_LITERAL(23, 294, 20),
QT_MOC_LITERAL(24, 315, 14),
QT_MOC_LITERAL(25, 330, 12),
QT_MOC_LITERAL(26, 343, 11),
QT_MOC_LITERAL(27, 355, 14)
    },
    "PrimaryFlightDisplayQML\0fullScreenModeChanged\0"
    "\0videoEnabledChanged\0topMostModeChanged\0"
    "pipelineStringChanged\0setActiveUAS\0"
    "UASInterface*\0uas\0uasTextMessage\0uasid\0"
    "componentid\0severity\0text\0updateNavMode\0"
    "mode\0topLevelChanged\0topLevel\0"
    "dockLocationChanged\0Qt::DockWidgetArea\0"
    "area\0enableVideo\0enabled\0onTopMostModeChanged\0"
    "fullScreenMode\0videoEnabled\0topMostMode\0"
    "pipelineString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrimaryFlightDisplayQML[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x08 /* Private */,
       9,    4,   76,    2, 0x08 /* Private */,
      14,    3,   85,    2, 0x08 /* Private */,
      16,    1,   92,    2, 0x08 /* Private */,
      18,    1,   95,    2, 0x08 /* Private */,
      21,    1,   98,    2, 0x08 /* Private */,
      23,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   10,   15,   13,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00495103,
      25, QMetaType::Bool, 0x00495103,
      26, QMetaType::Bool, 0x00495103,
      27, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void PrimaryFlightDisplayQML::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrimaryFlightDisplayQML *_t = static_cast<PrimaryFlightDisplayQML *>(_o);
        switch (_id) {
        case 0: _t->fullScreenModeChanged(); break;
        case 1: _t->videoEnabledChanged(); break;
        case 2: _t->topMostModeChanged(); break;
        case 3: _t->pipelineStringChanged(); break;
        case 4: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->uasTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 6: _t->updateNavMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 9: _t->enableVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onTopMostModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PrimaryFlightDisplayQML::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrimaryFlightDisplayQML::fullScreenModeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PrimaryFlightDisplayQML::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrimaryFlightDisplayQML::videoEnabledChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PrimaryFlightDisplayQML::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrimaryFlightDisplayQML::topMostModeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PrimaryFlightDisplayQML::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrimaryFlightDisplayQML::pipelineStringChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject PrimaryFlightDisplayQML::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PrimaryFlightDisplayQML.data,
      qt_meta_data_PrimaryFlightDisplayQML,  qt_static_metacall, 0, 0}
};


const QMetaObject *PrimaryFlightDisplayQML::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrimaryFlightDisplayQML::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryFlightDisplayQML.stringdata))
        return static_cast<void*>(const_cast< PrimaryFlightDisplayQML*>(this));
    return QWidget::qt_metacast(_clname);
}

int PrimaryFlightDisplayQML::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isFullScreenMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isVideoEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isTopMostMode(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getPipelineString(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFullScreenMode(*reinterpret_cast< bool*>(_v)); break;
        case 1: setVideoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: setTopMostMode(*reinterpret_cast< bool*>(_v)); break;
        case 3: setPipelineString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PrimaryFlightDisplayQML::fullScreenModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PrimaryFlightDisplayQML::videoEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PrimaryFlightDisplayQML::topMostModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PrimaryFlightDisplayQML::pipelineStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
