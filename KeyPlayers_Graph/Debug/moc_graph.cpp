/****************************************************************************
** Meta object code from reading C++ file 'graph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/graph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Graph_t {
    QByteArrayData data[71];
    char stringdata0[911];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graph_t qt_meta_stringdata_Graph = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Graph"
QT_MOC_LITERAL(1, 6, 20), // "updateProgressDialog"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "graphChanged"
QT_MOC_LITERAL(4, 41, 14), // "signalFileType"
QT_MOC_LITERAL(5, 56, 13), // "statusMessage"
QT_MOC_LITERAL(6, 70, 7), // "message"
QT_MOC_LITERAL(7, 78, 15), // "addRelationToMW"
QT_MOC_LITERAL(8, 94, 11), // "newRelation"
QT_MOC_LITERAL(9, 106, 15), // "describeDataset"
QT_MOC_LITERAL(10, 122, 26), // "signalNodeSizesByOutDegree"
QT_MOC_LITERAL(11, 149, 25), // "signalNodeSizesByInDegree"
QT_MOC_LITERAL(12, 175, 8), // "drawNode"
QT_MOC_LITERAL(13, 184, 9), // "eraseNode"
QT_MOC_LITERAL(14, 194, 8), // "long int"
QT_MOC_LITERAL(15, 203, 8), // "drawEdge"
QT_MOC_LITERAL(16, 212, 9), // "drawEdge1"
QT_MOC_LITERAL(17, 222, 9), // "eraseEdge"
QT_MOC_LITERAL(18, 232, 17), // "setEdgeVisibility"
QT_MOC_LITERAL(19, 250, 19), // "setVertexVisibility"
QT_MOC_LITERAL(20, 270, 11), // "setNodeSize"
QT_MOC_LITERAL(21, 282, 12), // "setNodeShape"
QT_MOC_LITERAL(22, 295, 12), // "setNodeColor"
QT_MOC_LITERAL(23, 308, 12), // "setNodeLabel"
QT_MOC_LITERAL(24, 321, 18), // "drawEdgeReciprocal"
QT_MOC_LITERAL(25, 340, 15), // "changeEdgeColor"
QT_MOC_LITERAL(26, 356, 14), // "addGuideCircle"
QT_MOC_LITERAL(27, 371, 13), // "addGuideHLine"
QT_MOC_LITERAL(28, 385, 8), // "moveNode"
QT_MOC_LITERAL(29, 394, 15), // "relationChanged"
QT_MOC_LITERAL(30, 410, 13), // "operateSpider"
QT_MOC_LITERAL(31, 424, 15), // "currentRelation"
QT_MOC_LITERAL(32, 440, 21), // "addRelationFromParser"
QT_MOC_LITERAL(33, 462, 12), // "createVertex"
QT_MOC_LITERAL(34, 475, 1), // "i"
QT_MOC_LITERAL(35, 477, 4), // "size"
QT_MOC_LITERAL(36, 482, 9), // "nodeColor"
QT_MOC_LITERAL(37, 492, 8), // "numColor"
QT_MOC_LITERAL(38, 501, 7), // "numSize"
QT_MOC_LITERAL(39, 509, 5), // "label"
QT_MOC_LITERAL(40, 515, 6), // "lColor"
QT_MOC_LITERAL(41, 522, 5), // "lSize"
QT_MOC_LITERAL(42, 528, 1), // "p"
QT_MOC_LITERAL(43, 530, 9), // "nodeShape"
QT_MOC_LITERAL(44, 540, 8), // "signalMW"
QT_MOC_LITERAL(45, 549, 11), // "setFileType"
QT_MOC_LITERAL(46, 561, 15), // "removeDummyNode"
QT_MOC_LITERAL(47, 577, 22), // "terminateParserThreads"
QT_MOC_LITERAL(48, 600, 6), // "reason"
QT_MOC_LITERAL(49, 607, 10), // "createEdge"
QT_MOC_LITERAL(50, 618, 11), // "createEdge1"
QT_MOC_LITERAL(51, 630, 20), // "createEdgeWebCrawler"
QT_MOC_LITERAL(52, 651, 21), // "slotSetEdgeVisibility"
QT_MOC_LITERAL(53, 673, 8), // "relation"
QT_MOC_LITERAL(54, 682, 11), // "canvasWidth"
QT_MOC_LITERAL(55, 694, 12), // "canvasHeight"
QT_MOC_LITERAL(56, 707, 22), // "createVertexWebCrawler"
QT_MOC_LITERAL(57, 730, 14), // "changeRelation"
QT_MOC_LITERAL(58, 745, 19), // "addRelationFromUser"
QT_MOC_LITERAL(59, 765, 19), // "setCanvasDimensions"
QT_MOC_LITERAL(60, 785, 1), // "w"
QT_MOC_LITERAL(61, 787, 1), // "h"
QT_MOC_LITERAL(62, 789, 21), // "filterIsolateVertices"
QT_MOC_LITERAL(63, 811, 19), // "filterEdgesByWeight"
QT_MOC_LITERAL(64, 831, 21), // "filterEdgesByRelation"
QT_MOC_LITERAL(65, 853, 6), // "status"
QT_MOC_LITERAL(66, 860, 8), // "webCrawl"
QT_MOC_LITERAL(67, 869, 8), // "extLinks"
QT_MOC_LITERAL(68, 878, 8), // "intLinks"
QT_MOC_LITERAL(69, 887, 15), // "setGraphChanged"
QT_MOC_LITERAL(70, 903, 7) // "changed"

    },
    "Graph\0updateProgressDialog\0\0graphChanged\0"
    "signalFileType\0statusMessage\0message\0"
    "addRelationToMW\0newRelation\0describeDataset\0"
    "signalNodeSizesByOutDegree\0"
    "signalNodeSizesByInDegree\0drawNode\0"
    "eraseNode\0long int\0drawEdge\0drawEdge1\0"
    "eraseEdge\0setEdgeVisibility\0"
    "setVertexVisibility\0setNodeSize\0"
    "setNodeShape\0setNodeColor\0setNodeLabel\0"
    "drawEdgeReciprocal\0changeEdgeColor\0"
    "addGuideCircle\0addGuideHLine\0moveNode\0"
    "relationChanged\0operateSpider\0"
    "currentRelation\0addRelationFromParser\0"
    "createVertex\0i\0size\0nodeColor\0numColor\0"
    "numSize\0label\0lColor\0lSize\0p\0nodeShape\0"
    "signalMW\0setFileType\0removeDummyNode\0"
    "terminateParserThreads\0reason\0createEdge\0"
    "createEdge1\0createEdgeWebCrawler\0"
    "slotSetEdgeVisibility\0relation\0"
    "canvasWidth\0canvasHeight\0"
    "createVertexWebCrawler\0changeRelation\0"
    "addRelationFromUser\0setCanvasDimensions\0"
    "w\0h\0filterIsolateVertices\0filterEdgesByWeight\0"
    "filterEdgesByRelation\0status\0webCrawl\0"
    "extLinks\0intLinks\0setGraphChanged\0"
    "changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x06 /* Public */,
       3,    0,  257,    2, 0x06 /* Public */,
       4,    5,  258,    2, 0x06 /* Public */,
       5,    1,  269,    2, 0x06 /* Public */,
       7,    1,  272,    2, 0x06 /* Public */,
       9,    1,  275,    2, 0x06 /* Public */,
      10,    1,  278,    2, 0x06 /* Public */,
      11,    1,  281,    2, 0x06 /* Public */,
      12,   13,  284,    2, 0x06 /* Public */,
      13,    1,  311,    2, 0x06 /* Public */,
      15,    7,  314,    2, 0x06 /* Public */,
      16,    8,  329,    2, 0x06 /* Public */,
      17,    2,  346,    2, 0x06 /* Public */,
      18,    4,  351,    2, 0x06 /* Public */,
      19,    2,  360,    2, 0x06 /* Public */,
      20,    2,  365,    2, 0x06 /* Public */,
      21,    2,  370,    2, 0x06 /* Public */,
      22,    2,  375,    2, 0x06 /* Public */,
      23,    2,  380,    2, 0x06 /* Public */,
      24,    2,  385,    2, 0x06 /* Public */,
      25,    3,  390,    2, 0x06 /* Public */,
      26,    3,  397,    2, 0x06 /* Public */,
      27,    1,  404,    2, 0x06 /* Public */,
      28,    3,  407,    2, 0x06 /* Public */,
      29,    1,  414,    2, 0x06 /* Public */,
      30,    0,  417,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  418,    2, 0x0a /* Public */,
      32,    1,  419,    2, 0x0a /* Public */,
      33,   11,  422,    2, 0x0a /* Public */,
      45,    5,  445,    2, 0x0a /* Public */,
      46,    1,  456,    2, 0x0a /* Public */,
      47,    1,  459,    2, 0x0a /* Public */,
      49,    7,  462,    2, 0x0a /* Public */,
      50,    8,  477,    2, 0x0a /* Public */,
      49,    6,  494,    2, 0x0a /* Public */,
      51,    2,  507,    2, 0x0a /* Public */,
      52,    4,  512,    2, 0x0a /* Public */,
      33,    2,  521,    2, 0x0a /* Public */,
      33,    3,  526,    2, 0x0a /* Public */,
      56,    2,  533,    2, 0x0a /* Public */,
      57,    1,  538,    2, 0x0a /* Public */,
      58,    1,  541,    2, 0x0a /* Public */,
      59,    2,  544,    2, 0x0a /* Public */,
      62,    1,  549,    2, 0x0a /* Public */,
      63,    2,  552,    2, 0x0a /* Public */,
      64,    2,  557,    2, 0x0a /* Public */,
      66,    5,  562,    2, 0x0a /* Public */,
      69,    1,  573,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QPointF, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal, QMetaType::QReal,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QPointF, QMetaType::QString, QMetaType::Bool,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   53,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,   34,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   34,   54,   55,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   39,   34,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   60,   61,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   53,   65,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,   67,   68,
    QMetaType::Void, QMetaType::Bool,   70,

       0        // eod
};

void Graph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Graph *_t = static_cast<Graph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgressDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->graphChanged(); break;
        case 2: _t->signalFileType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->statusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->addRelationToMW((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->describeDataset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->signalNodeSizesByOutDegree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->signalNodeSizesByInDegree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->drawNode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< QPointF(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 9: _t->eraseNode((*reinterpret_cast< long int(*)>(_a[1]))); break;
        case 10: _t->drawEdge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 11: _t->drawEdge1((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 12: _t->eraseEdge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setEdgeVisibility((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 14: _t->setVertexVisibility((*reinterpret_cast< long int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->setNodeSize((*reinterpret_cast< long int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->setNodeShape((*reinterpret_cast< const long int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setNodeColor((*reinterpret_cast< long int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->setNodeLabel((*reinterpret_cast< long int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->drawEdgeReciprocal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->changeEdgeColor((*reinterpret_cast< long int(*)>(_a[1])),(*reinterpret_cast< long int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 21: _t->addGuideCircle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->addGuideHLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->moveNode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 24: _t->relationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->operateSpider(); break;
        case 26: { int _r = _t->currentRelation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: _t->addRelationFromParser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->createVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< QPointF(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 29: _t->setFileType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 30: _t->removeDummyNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->terminateParserThreads((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->createEdge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 33: _t->createEdge1((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 34: _t->createEdge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 35: _t->createEdgeWebCrawler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 36: _t->slotSetEdgeVisibility((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 37: _t->createVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 38: _t->createVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 39: _t->createVertexWebCrawler((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->changeRelation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->addRelationFromUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->setCanvasDimensions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->filterIsolateVertices((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->filterEdgesByWeight((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->filterEdgesByRelation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->webCrawl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 47: _t->setGraphChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Graph::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::updateProgressDialog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Graph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::graphChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , QString , int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::signalFileType)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::statusMessage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::addRelationToMW)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::describeDataset)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::signalNodeSizesByOutDegree)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::signalNodeSizesByInDegree)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int , QString , QString , int , QString , QString , int , QPointF , QString , bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::drawNode)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(long int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::eraseNode)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int , float , bool , bool , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::drawEdge)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int , float , float , bool , bool , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::drawEdge1)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::eraseEdge)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::setEdgeVisibility)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(long int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::setVertexVisibility)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(long int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::setNodeSize)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(const long int , const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::setNodeShape)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(long int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::setNodeColor)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(long int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::setNodeLabel)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::drawEdgeReciprocal)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(long int , long int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::changeEdgeColor)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::addGuideCircle)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::addGuideHLine)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int , qreal , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::moveNode)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (Graph::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::relationChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (Graph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graph::operateSpider)) {
                *result = 25;
                return;
            }
        }
    }
}

const QMetaObject Graph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Graph.data,
      qt_meta_data_Graph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Graph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Graph.stringdata0))
        return static_cast<void*>(const_cast< Graph*>(this));
    return QObject::qt_metacast(_clname);
}

int Graph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void Graph::updateProgressDialog(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Graph::graphChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Graph::signalFileType(int _t1, QString _t2, int _t3, int _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Graph::statusMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Graph::addRelationToMW(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Graph::describeDataset(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Graph::signalNodeSizesByOutDegree(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Graph::signalNodeSizesByInDegree(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Graph::drawNode(int _t1, int _t2, QString _t3, QString _t4, int _t5, QString _t6, QString _t7, int _t8, QPointF _t9, QString _t10, bool _t11, bool _t12, bool _t13)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Graph::eraseNode(long int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Graph::drawEdge(int _t1, int _t2, float _t3, bool _t4, bool _t5, QString _t6, bool _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Graph::drawEdge1(int _t1, int _t2, float _t3, float _t4, bool _t5, bool _t6, QString _t7, bool _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Graph::eraseEdge(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Graph::setEdgeVisibility(int _t1, int _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Graph::setVertexVisibility(long int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Graph::setNodeSize(long int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Graph::setNodeShape(const long int _t1, const QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Graph::setNodeColor(long int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Graph::setNodeLabel(long int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Graph::drawEdgeReciprocal(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Graph::changeEdgeColor(long int _t1, long int _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Graph::addGuideCircle(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Graph::addGuideHLine(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Graph::moveNode(int _t1, qreal _t2, qreal _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Graph::relationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Graph::operateSpider()
{
    QMetaObject::activate(this, &staticMetaObject, 25, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
