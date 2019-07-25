/****************************************************************************
** Meta object code from reading C++ file 'sdkdemo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SDKQT/sdkdemo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sdkdemo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SDKDemo_t {
    QByteArrayData data[22];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDKDemo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDKDemo_t qt_meta_stringdata_SDKDemo = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SDKDemo"
QT_MOC_LITERAL(1, 8, 22), // "on_pictureinit_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "on_caminit_clicked"
QT_MOC_LITERAL(4, 51, 21), // "on_camtestbtn_clicked"
QT_MOC_LITERAL(5, 73, 34), // "on_cammodcombo_currentIndexCh..."
QT_MOC_LITERAL(6, 108, 5), // "index"
QT_MOC_LITERAL(7, 114, 13), // "picinittoggle"
QT_MOC_LITERAL(8, 128, 13), // "ispictureinit"
QT_MOC_LITERAL(9, 142, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 164, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 188, 12), // "cambtntoggle"
QT_MOC_LITERAL(12, 201, 7), // "iscamon"
QT_MOC_LITERAL(13, 209, 13), // "caminittoggle"
QT_MOC_LITERAL(14, 223, 9), // "iscaminit"
QT_MOC_LITERAL(15, 233, 12), // "capturebtnOn"
QT_MOC_LITERAL(16, 246, 13), // "capturebtnOff"
QT_MOC_LITERAL(17, 260, 19), // "on_btestbtn_clicked"
QT_MOC_LITERAL(18, 280, 19), // "on_ptestbtn_clicked"
QT_MOC_LITERAL(19, 300, 20), // "on_extestbtn_clicked"
QT_MOC_LITERAL(20, 321, 21), // "on_capturebtn_clicked"
QT_MOC_LITERAL(21, 343, 20) // "on_assignbtn_clicked"

    },
    "SDKDemo\0on_pictureinit_clicked\0\0"
    "on_caminit_clicked\0on_camtestbtn_clicked\0"
    "on_cammodcombo_currentIndexChanged\0"
    "index\0picinittoggle\0ispictureinit\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "cambtntoggle\0iscamon\0caminittoggle\0"
    "iscaminit\0capturebtnOn\0capturebtnOff\0"
    "on_btestbtn_clicked\0on_ptestbtn_clicked\0"
    "on_extestbtn_clicked\0on_capturebtn_clicked\0"
    "on_assignbtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDKDemo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    1,   97,    2, 0x08 /* Private */,
       7,    1,  100,    2, 0x08 /* Private */,
       9,    0,  103,    2, 0x08 /* Private */,
      10,    0,  104,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SDKDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SDKDemo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pictureinit_clicked(); break;
        case 1: _t->on_caminit_clicked(); break;
        case 2: _t->on_camtestbtn_clicked(); break;
        case 3: _t->on_cammodcombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->picinittoggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->cambtntoggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->caminittoggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->capturebtnOn(); break;
        case 10: _t->capturebtnOff(); break;
        case 11: _t->on_btestbtn_clicked(); break;
        case 12: _t->on_ptestbtn_clicked(); break;
        case 13: _t->on_extestbtn_clicked(); break;
        case 14: _t->on_capturebtn_clicked(); break;
        case 15: _t->on_assignbtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SDKDemo::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SDKDemo.data,
    qt_meta_data_SDKDemo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SDKDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDKDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SDKDemo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SDKDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
