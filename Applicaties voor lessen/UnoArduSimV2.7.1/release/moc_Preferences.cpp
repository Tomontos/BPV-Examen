/****************************************************************************
** Meta object code from reading C++ file 'Preferences.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QUnoArduSimProject/Preferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Preferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPreferences_t {
    QByteArrayData data[16];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPreferences_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPreferences_t qt_meta_stringdata_CPreferences = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CPreferences"
QT_MOC_LITERAL(1, 13, 4), // "OnOK"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "OnCancel"
QT_MOC_LITERAL(4, 28, 11), // "OnLoadPrefs"
QT_MOC_LITERAL(5, 40, 11), // "OnSavePrefs"
QT_MOC_LITERAL(6, 52, 19), // "OnUnoVersionChanged"
QT_MOC_LITERAL(7, 72, 12), // "enum_version"
QT_MOC_LITERAL(8, 85, 18), // "OnTWIBufferChanged"
QT_MOC_LITERAL(9, 104, 11), // "enum_length"
QT_MOC_LITERAL(10, 116, 17), // "OnTypeSizeChanged"
QT_MOC_LITERAL(11, 134, 9), // "enum_size"
QT_MOC_LITERAL(12, 144, 13), // "OnFontChanged"
QT_MOC_LITERAL(13, 158, 9), // "enum_font"
QT_MOC_LITERAL(14, 168, 13), // "OnLangChanged"
QT_MOC_LITERAL(15, 182, 9) // "enum_lang"

    },
    "CPreferences\0OnOK\0\0OnCancel\0OnLoadPrefs\0"
    "OnSavePrefs\0OnUnoVersionChanged\0"
    "enum_version\0OnTWIBufferChanged\0"
    "enum_length\0OnTypeSizeChanged\0enum_size\0"
    "OnFontChanged\0enum_font\0OnLangChanged\0"
    "enum_lang"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPreferences[] = {

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
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    1,   63,    2, 0x09 /* Protected */,
       8,    1,   66,    2, 0x09 /* Protected */,
      10,    1,   69,    2, 0x09 /* Protected */,
      12,    1,   72,    2, 0x09 /* Protected */,
      14,    1,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void CPreferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPreferences *_t = static_cast<CPreferences *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOK(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnLoadPrefs(); break;
        case 3: _t->OnSavePrefs(); break;
        case 4: _t->OnUnoVersionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnTWIBufferChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnTypeSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnFontChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnLangChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CPreferences::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CPreferences.data,
      qt_meta_data_CPreferences,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPreferences.stringdata0))
        return static_cast<void*>(const_cast< CPreferences*>(this));
    return QDialog::qt_metacast(_clname);
}

int CPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
