/****************************************************************************
** Meta object code from reading C++ file 'FuncGen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/FuncGen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FuncGen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CFuncGen_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CFuncGen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CFuncGen_t qt_meta_stringdata_CFuncGen = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CFuncGen"
QT_MOC_LITERAL(1, 9, 11), // "OnPinEdited"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "k"
QT_MOC_LITERAL(4, 24, 14), // "OnPeriodEdited"
QT_MOC_LITERAL(5, 39, 11), // "strgNewText"
QT_MOC_LITERAL(6, 51, 13), // "OnWaveClicked"
QT_MOC_LITERAL(7, 65, 9) // "wave_enum"

    },
    "CFuncGen\0OnPinEdited\0\0k\0OnPeriodEdited\0"
    "strgNewText\0OnWaveClicked\0wave_enum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CFuncGen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    1,   32,    2, 0x09 /* Protected */,
       6,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void CFuncGen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CFuncGen *_t = static_cast<CFuncGen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPinEdited((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnPeriodEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnWaveClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CFuncGen::staticMetaObject = {
    { &CIODev::staticMetaObject, qt_meta_stringdata_CFuncGen.data,
      qt_meta_data_CFuncGen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CFuncGen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CFuncGen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CFuncGen.stringdata0))
        return static_cast<void*>(const_cast< CFuncGen*>(this));
    return CIODev::qt_metacast(_clname);
}

int CFuncGen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CIODev::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
