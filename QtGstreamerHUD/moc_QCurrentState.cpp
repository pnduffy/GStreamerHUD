/****************************************************************************
** Meta object code from reading C++ file 'QCurrentState.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QCurrentState.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCurrentState.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCurrentState_t {
    QByteArrayData data[22];
    char stringdata[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCurrentState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCurrentState_t qt_meta_stringdata_QCurrentState = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 12),
QT_MOC_LITERAL(4, 40, 10),
QT_MOC_LITERAL(5, 51, 18),
QT_MOC_LITERAL(6, 70, 15),
QT_MOC_LITERAL(7, 86, 21),
QT_MOC_LITERAL(8, 108, 21),
QT_MOC_LITERAL(9, 130, 23),
QT_MOC_LITERAL(10, 154, 15),
QT_MOC_LITERAL(11, 170, 17),
QT_MOC_LITERAL(12, 188, 4),
QT_MOC_LITERAL(13, 193, 5),
QT_MOC_LITERAL(14, 199, 3),
QT_MOC_LITERAL(15, 203, 11),
QT_MOC_LITERAL(16, 215, 8),
QT_MOC_LITERAL(17, 224, 14),
QT_MOC_LITERAL(18, 239, 14),
QT_MOC_LITERAL(19, 254, 16),
QT_MOC_LITERAL(20, 271, 8),
QT_MOC_LITERAL(21, 280, 10)
    },
    "QCurrentState\0rollChanged\0\0pitchChanged\0"
    "yawChanged\0groundspeedChanged\0"
    "airspeedChanged\0batteryVoltageChanged\0"
    "batteryCurrentChanged\0batteryRemainingChanged\0"
    "altitudeChanged\0flightModeChanged\0"
    "roll\0pitch\0yaw\0groundspeed\0airspeed\0"
    "batteryVoltage\0batteryCurrent\0"
    "batteryRemaining\0altitude\0flightMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCurrentState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,
       6,    1,   76,    2, 0x06 /* Public */,
       7,    1,   79,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,
       9,    1,   85,    2, 0x06 /* Public */,
      10,    1,   88,    2, 0x06 /* Public */,
      11,    1,   91,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::Float, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void QCurrentState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCurrentState *_t = static_cast<QCurrentState *>(_o);
        switch (_id) {
        case 0: _t->rollChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->pitchChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->yawChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->groundspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->airspeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->batteryVoltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->batteryCurrentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->batteryRemainingChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->altitudeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->flightModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::rollChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::pitchChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::yawChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::groundspeedChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::airspeedChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::batteryVoltageChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::batteryCurrentChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::batteryRemainingChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QCurrentState::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::altitudeChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QCurrentState::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCurrentState::flightModeChanged)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject QCurrentState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCurrentState.data,
      qt_meta_data_QCurrentState,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCurrentState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCurrentState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCurrentState.stringdata))
        return static_cast<void*>(const_cast< QCurrentState*>(this));
    return QObject::qt_metacast(_clname);
}

int QCurrentState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = getRoll(); break;
        case 1: *reinterpret_cast< float*>(_v) = getPitch(); break;
        case 2: *reinterpret_cast< float*>(_v) = getYaw(); break;
        case 3: *reinterpret_cast< float*>(_v) = getGroundspeed(); break;
        case 4: *reinterpret_cast< float*>(_v) = getAirspeed(); break;
        case 5: *reinterpret_cast< float*>(_v) = getBatteryVoltage(); break;
        case 6: *reinterpret_cast< float*>(_v) = getBatteryCurrent(); break;
        case 7: *reinterpret_cast< float*>(_v) = getBatteryRemaining(); break;
        case 8: *reinterpret_cast< float*>(_v) = getAltitude(); break;
        case 9: *reinterpret_cast< QString*>(_v) = getFlightMode(); break;
        default: break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRoll(*reinterpret_cast< float*>(_v)); break;
        case 1: setPitch(*reinterpret_cast< float*>(_v)); break;
        case 2: setYaw(*reinterpret_cast< float*>(_v)); break;
        case 3: setGroundspeed(*reinterpret_cast< float*>(_v)); break;
        case 4: setAirspeed(*reinterpret_cast< float*>(_v)); break;
        case 5: setBatteryVoltage(*reinterpret_cast< float*>(_v)); break;
        case 6: setBatteryCurrent(*reinterpret_cast< float*>(_v)); break;
        case 7: setBatteryRemaining(*reinterpret_cast< float*>(_v)); break;
        case 8: setAltitude(*reinterpret_cast< float*>(_v)); break;
        case 9: setFlightMode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCurrentState::rollChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCurrentState::pitchChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCurrentState::yawChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCurrentState::groundspeedChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCurrentState::airspeedChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCurrentState::batteryVoltageChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCurrentState::batteryCurrentChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCurrentState::batteryRemainingChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCurrentState::altitudeChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCurrentState::flightModeChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
