/****************************************************************************
** Meta object code from reading C++ file 'parser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/parser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Parser_t {
    QByteArrayData data[21];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Parser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Parser_t qt_meta_stringdata_Parser = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Parser"
QT_MOC_LITERAL(1, 7, 11), // "addRelation"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "changeRelation"
QT_MOC_LITERAL(4, 35, 10), // "createNode"
QT_MOC_LITERAL(5, 46, 3), // "num"
QT_MOC_LITERAL(6, 50, 4), // "size"
QT_MOC_LITERAL(7, 55, 5), // "color"
QT_MOC_LITERAL(8, 61, 8), // "numColor"
QT_MOC_LITERAL(9, 70, 7), // "numSize"
QT_MOC_LITERAL(10, 78, 5), // "label"
QT_MOC_LITERAL(11, 84, 6), // "lColor"
QT_MOC_LITERAL(12, 91, 5), // "lSize"
QT_MOC_LITERAL(13, 97, 1), // "p"
QT_MOC_LITERAL(14, 99, 5), // "shape"
QT_MOC_LITERAL(15, 105, 8), // "signalMW"
QT_MOC_LITERAL(16, 114, 10), // "createEdge"
QT_MOC_LITERAL(17, 125, 11), // "createEdge1"
QT_MOC_LITERAL(18, 137, 8), // "fileType"
QT_MOC_LITERAL(19, 146, 15), // "removeDummyNode"
QT_MOC_LITERAL(20, 162, 8) // "finished"

    },
    "Parser\0addRelation\0\0changeRelation\0"
    "createNode\0num\0size\0color\0numColor\0"
    "numSize\0label\0lColor\0lSize\0p\0shape\0"
    "signalMW\0createEdge\0createEdge1\0"
    "fileType\0removeDummyNode\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Parser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,   11,   60,    2, 0x06 /* Public */,
      16,    7,   83,    2, 0x06 /* Public */,
      17,    8,   98,    2, 0x06 /* Public */,
      18,    5,  115,    2, 0x06 /* Public */,
      19,    1,  126,    2, 0x06 /* Public */,
      20,    1,  129,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QPointF, QMetaType::QString, QMetaType::Bool,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Parser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Parser *_t = static_cast<Parser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRelation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeRelation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->createNode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< QPointF(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 3: _t->createEdge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 4: _t->createEdge1((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 5: _t->fileType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 6: _t->removeDummyNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Parser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::addRelation)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::changeRelation)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(int , int , QString , QString , int , QString , QString , int , QPointF , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::createNode)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(int , int , float , QString , int , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::createEdge)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(int , int , float , float , QString , int , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::createEdge1)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(int , QString , int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::fileType)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::removeDummyNode)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Parser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Parser::finished)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject Parser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Parser.data,
      qt_meta_data_Parser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Parser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Parser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Parser.stringdata0))
        return static_cast<void*>(const_cast< Parser*>(this));
    return QObject::qt_metacast(_clname);
}

int Parser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Parser::addRelation(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Parser::changeRelation(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Parser::createNode(int _t1, int _t2, QString _t3, QString _t4, int _t5, QString _t6, QString _t7, int _t8, QPointF _t9, QString _t10, bool _t11)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Parser::createEdge(int _t1, int _t2, float _t3, QString _t4, int _t5, bool _t6, bool _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Parser::createEdge1(int _t1, int _t2, float _t3, float _t4, QString _t5, int _t6, bool _t7, bool _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Parser::fileType(int _t1, QString _t2, int _t3, int _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Parser::removeDummyNode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Parser::finished(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
