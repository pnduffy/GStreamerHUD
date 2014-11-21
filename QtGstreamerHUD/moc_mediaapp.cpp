/****************************************************************************
** Meta object code from reading C++ file 'mediaapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mediaapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediaapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MediaApp_t {
    QByteArrayData data[12];
    char stringdata[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaApp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaApp_t qt_meta_stringdata_MediaApp = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 16),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 14),
QT_MOC_LITERAL(4, 42, 17),
QT_MOC_LITERAL(5, 60, 6),
QT_MOC_LITERAL(6, 67, 11),
QT_MOC_LITERAL(7, 79, 11),
QT_MOC_LITERAL(8, 91, 8),
QT_MOC_LITERAL(9, 100, 12),
QT_MOC_LITERAL(10, 113, 4),
QT_MOC_LITERAL(11, 118, 12)
    },
    "MediaApp\0toggleFullScreen\0\0onStateChanged\0"
    "onPositionChanged\0onStop\0onStopTimer\0"
    "setPosition\0position\0showControls\0"
    "show\0hideControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x28 /* Private | MethodCloned */,
      11,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MediaApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MediaApp *_t = static_cast<MediaApp *>(_o);
        switch (_id) {
        case 0: _t->toggleFullScreen(); break;
        case 1: _t->onStateChanged(); break;
        case 2: _t->onPositionChanged(); break;
        case 3: _t->onStop(); break;
        case 4: _t->onStopTimer(); break;
        case 5: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showControls(); break;
        case 8: _t->hideControls(); break;
        default: ;
        }
    }
}

const QMetaObject MediaApp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MediaApp.data,
      qt_meta_data_MediaApp,  qt_static_metacall, 0, 0}
};


const QMetaObject *MediaApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaApp.stringdata))
        return static_cast<void*>(const_cast< MediaApp*>(this));
    return QWidget::qt_metacast(_clname);
}

int MediaApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
