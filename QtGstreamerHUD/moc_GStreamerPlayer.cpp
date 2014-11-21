/****************************************************************************
** Meta object code from reading C++ file 'GStreamerPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GStreamerPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GStreamerPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GStreamerPlayer_t {
    QByteArrayData data[23];
    char stringdata[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GStreamerPlayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GStreamerPlayer_t qt_meta_stringdata_GStreamerPlayer = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 17),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 15),
QT_MOC_LITERAL(4, 51, 10),
QT_MOC_LITERAL(5, 62, 17),
QT_MOC_LITERAL(6, 80, 14),
QT_MOC_LITERAL(7, 95, 13),
QT_MOC_LITERAL(8, 109, 14),
QT_MOC_LITERAL(9, 124, 4),
QT_MOC_LITERAL(10, 129, 5),
QT_MOC_LITERAL(11, 135, 4),
QT_MOC_LITERAL(12, 140, 16),
QT_MOC_LITERAL(13, 157, 11),
QT_MOC_LITERAL(14, 169, 10),
QT_MOC_LITERAL(15, 180, 14),
QT_MOC_LITERAL(16, 195, 10),
QT_MOC_LITERAL(17, 206, 8),
QT_MOC_LITERAL(18, 215, 3),
QT_MOC_LITERAL(19, 219, 10),
QT_MOC_LITERAL(20, 230, 7),
QT_MOC_LITERAL(21, 238, 6),
QT_MOC_LITERAL(22, 245, 7)
    },
    "GStreamerPlayer\0brightnessChanged\0\0"
    "contrastChanged\0hueChanged\0saturationChanged\0"
    "playingChanged\0pausedChanged\0"
    "stoppedChanged\0play\0pause\0stop\0"
    "toggleFullScreen\0onStopTimer\0initialize\0"
    "pipelineString\0brightness\0contrast\0"
    "hue\0saturation\0playing\0paused\0stopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GStreamerPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,
       6,    1,   91,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       8,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  100,    2, 0x0a /* Public */,
      10,    0,  101,    2, 0x0a /* Public */,
      11,    0,  102,    2, 0x0a /* Public */,
      12,    0,  103,    2, 0x0a /* Public */,
      13,    0,  104,    2, 0x0a /* Public */,
      14,    1,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void GStreamerPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GStreamerPlayer *_t = static_cast<GStreamerPlayer *>(_o);
        switch (_id) {
        case 0: _t->brightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->contrastChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->hueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->saturationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->playingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->pausedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->stoppedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->play(); break;
        case 8: _t->pause(); break;
        case 9: _t->stop(); break;
        case 10: _t->toggleFullScreen(); break;
        case 11: _t->onStopTimer(); break;
        case 12: _t->initialize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GStreamerPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::brightnessChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GStreamerPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::contrastChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GStreamerPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::hueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GStreamerPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::saturationChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (GStreamerPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::playingChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (GStreamerPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::pausedChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (GStreamerPlayer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPlayer::stoppedChanged)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject GStreamerPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GStreamerPlayer.data,
      qt_meta_data_GStreamerPlayer,  qt_static_metacall, 0, 0}
};


const QMetaObject *GStreamerPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GStreamerPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GStreamerPlayer.stringdata))
        return static_cast<void*>(const_cast< GStreamerPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int GStreamerPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = getBrightness(); break;
        case 1: *reinterpret_cast< int*>(_v) = getContrast(); break;
        case 2: *reinterpret_cast< int*>(_v) = getHue(); break;
        case 3: *reinterpret_cast< int*>(_v) = getSaturation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = getPlaying(); break;
        case 5: *reinterpret_cast< bool*>(_v) = getPaused(); break;
        case 6: *reinterpret_cast< bool*>(_v) = getStopped(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBrightness(*reinterpret_cast< int*>(_v)); break;
        case 1: setContrast(*reinterpret_cast< int*>(_v)); break;
        case 2: setHue(*reinterpret_cast< int*>(_v)); break;
        case 3: setSaturation(*reinterpret_cast< int*>(_v)); break;
        case 4: setPlaying(*reinterpret_cast< bool*>(_v)); break;
        case 5: setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 6: setStopped(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
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
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GStreamerPlayer::brightnessChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GStreamerPlayer::contrastChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GStreamerPlayer::hueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GStreamerPlayer::saturationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GStreamerPlayer::playingChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GStreamerPlayer::pausedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GStreamerPlayer::stoppedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
