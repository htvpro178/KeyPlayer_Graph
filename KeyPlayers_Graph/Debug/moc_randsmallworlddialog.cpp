/****************************************************************************
** Meta object code from reading C++ file 'randsmallworlddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/randsmallworlddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'randsmallworlddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RandSmallWorldDialog_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RandSmallWorldDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RandSmallWorldDialog_t qt_meta_stringdata_RandSmallWorldDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RandSmallWorldDialog"
QT_MOC_LITERAL(1, 21, 11), // "userChoices"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "nodes"
QT_MOC_LITERAL(4, 40, 6), // "degree"
QT_MOC_LITERAL(5, 47, 4), // "prob"
QT_MOC_LITERAL(6, 52, 4), // "mode"
QT_MOC_LITERAL(7, 57, 4), // "diag"
QT_MOC_LITERAL(8, 62, 11), // "checkErrors"
QT_MOC_LITERAL(9, 74, 10), // "gatherData"
QT_MOC_LITERAL(10, 85, 15), // "setModeDirected"
QT_MOC_LITERAL(11, 101, 17), // "setModeUndirected"
QT_MOC_LITERAL(12, 119, 7) // "setDiag"

    },
    "RandSmallWorldDialog\0userChoices\0\0"
    "nodes\0degree\0prob\0mode\0diag\0checkErrors\0"
    "gatherData\0setModeDirected\0setModeUndirected\0"
    "setDiag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RandSmallWorldDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,
      11,    0,   58,    2, 0x0a /* Public */,
      12,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::QString, QMetaType::Bool,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RandSmallWorldDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RandSmallWorldDialog *_t = static_cast<RandSmallWorldDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userChoices((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const bool(*)>(_a[5]))); break;
        case 1: _t->checkErrors(); break;
        case 2: _t->gatherData(); break;
        case 3: _t->setModeDirected(); break;
        case 4: _t->setModeUndirected(); break;
        case 5: _t->setDiag(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RandSmallWorldDialog::*_t)(const int , const int , const float , const QString , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RandSmallWorldDialog::userChoices)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RandSmallWorldDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RandSmallWorldDialog.data,
      qt_meta_data_RandSmallWorldDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RandSmallWorldDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RandSmallWorldDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RandSmallWorldDialog.stringdata0))
        return static_cast<void*>(const_cast< RandSmallWorldDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RandSmallWorldDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RandSmallWorldDialog::userChoices(const int _t1, const int _t2, const float _t3, const QString _t4, const bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
