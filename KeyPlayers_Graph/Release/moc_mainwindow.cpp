/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[177];
    char stringdata0[3214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "addRelationToGraph"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "slotCreateNew"
QT_MOC_LITERAL(4, 45, 15), // "slotInitVarible"
QT_MOC_LITERAL(5, 61, 6), // "flagPp"
QT_MOC_LITERAL(6, 68, 14), // "slotChooseFile"
QT_MOC_LITERAL(7, 83, 17), // "slotImportGraphML"
QT_MOC_LITERAL(8, 101, 15), // "slotImportPajek"
QT_MOC_LITERAL(9, 117, 12), // "slotImportSM"
QT_MOC_LITERAL(10, 130, 13), // "slotImportDot"
QT_MOC_LITERAL(11, 144, 13), // "slotImportGML"
QT_MOC_LITERAL(12, 158, 12), // "slotImportDL"
QT_MOC_LITERAL(13, 171, 18), // "slotImportEdgeList"
QT_MOC_LITERAL(14, 190, 19), // "slotImportTwoModeSM"
QT_MOC_LITERAL(15, 210, 12), // "slotFileSave"
QT_MOC_LITERAL(16, 223, 14), // "slotFileSaveAs"
QT_MOC_LITERAL(17, 238, 13), // "slotFileClose"
QT_MOC_LITERAL(18, 252, 13), // "slotPrintView"
QT_MOC_LITERAL(19, 266, 13), // "slotExportBMP"
QT_MOC_LITERAL(20, 280, 13), // "slotExportPNG"
QT_MOC_LITERAL(21, 294, 13), // "slotExportPDF"
QT_MOC_LITERAL(22, 308, 15), // "slotExportPajek"
QT_MOC_LITERAL(23, 324, 12), // "slotExportSM"
QT_MOC_LITERAL(24, 337, 12), // "slotExportDL"
QT_MOC_LITERAL(25, 350, 12), // "slotExportGW"
QT_MOC_LITERAL(26, 363, 14), // "slotExportList"
QT_MOC_LITERAL(27, 378, 18), // "slotOpenTextEditor"
QT_MOC_LITERAL(28, 397, 19), // "slotViewNetworkFile"
QT_MOC_LITERAL(29, 417, 10), // "findCodecs"
QT_MOC_LITERAL(30, 428, 9), // "userCodec"
QT_MOC_LITERAL(31, 438, 23), // "slotViewAdjacencyMatrix"
QT_MOC_LITERAL(32, 462, 27), // "slotShowDataSetSelectDialog"
QT_MOC_LITERAL(33, 490, 19), // "slotRecreateDataSet"
QT_MOC_LITERAL(34, 510, 26), // "slotCreateRandomErdosRenyi"
QT_MOC_LITERAL(35, 537, 20), // "createRandomNetErdos"
QT_MOC_LITERAL(36, 558, 1), // "N"
QT_MOC_LITERAL(37, 560, 5), // "model"
QT_MOC_LITERAL(38, 566, 5), // "edges"
QT_MOC_LITERAL(39, 572, 5), // "eprob"
QT_MOC_LITERAL(40, 578, 4), // "mode"
QT_MOC_LITERAL(41, 583, 4), // "diag"
QT_MOC_LITERAL(42, 588, 30), // "slotCreateRegularRandomNetwork"
QT_MOC_LITERAL(43, 619, 24), // "slotCreateRandomGaussian"
QT_MOC_LITERAL(44, 644, 27), // "slotCreateRandomRingLattice"
QT_MOC_LITERAL(45, 672, 25), // "slotCreateRandomScaleFree"
QT_MOC_LITERAL(46, 698, 22), // "createScaleFreeNetwork"
QT_MOC_LITERAL(47, 721, 5), // "nodes"
QT_MOC_LITERAL(48, 727, 5), // "power"
QT_MOC_LITERAL(49, 733, 12), // "initialNodes"
QT_MOC_LITERAL(50, 746, 12), // "edgesPerStep"
QT_MOC_LITERAL(51, 759, 10), // "zeroAppeal"
QT_MOC_LITERAL(52, 770, 26), // "slotCreateRandomSmallWorld"
QT_MOC_LITERAL(53, 797, 23), // "createSmallWorldNetwork"
QT_MOC_LITERAL(54, 821, 6), // "degree"
QT_MOC_LITERAL(55, 828, 4), // "beta"
QT_MOC_LITERAL(56, 833, 24), // "slotShowWebCrawlerDialog"
QT_MOC_LITERAL(57, 858, 12), // "slotWebCrawl"
QT_MOC_LITERAL(58, 871, 12), // "prevRelation"
QT_MOC_LITERAL(59, 884, 12), // "nextRelation"
QT_MOC_LITERAL(60, 897, 11), // "addRelation"
QT_MOC_LITERAL(61, 909, 12), // "relationName"
QT_MOC_LITERAL(62, 922, 13), // "slotSelectAll"
QT_MOC_LITERAL(63, 936, 14), // "slotSelectNone"
QT_MOC_LITERAL(64, 951, 12), // "slotFindNode"
QT_MOC_LITERAL(65, 964, 11), // "slotAddEdge"
QT_MOC_LITERAL(66, 976, 14), // "slotRemoveNode"
QT_MOC_LITERAL(67, 991, 18), // "slotNodeProperties"
QT_MOC_LITERAL(68, 1010, 14), // "slotRemoveEdge"
QT_MOC_LITERAL(69, 1025, 24), // "slotChangeNodeProperties"
QT_MOC_LITERAL(70, 1050, 19), // "slotChangeEdgeLabel"
QT_MOC_LITERAL(71, 1070, 19), // "slotChangeEdgeColor"
QT_MOC_LITERAL(72, 1090, 20), // "slotChangeEdgeWeight"
QT_MOC_LITERAL(73, 1111, 15), // "slotFilterNodes"
QT_MOC_LITERAL(74, 1127, 22), // "slotFilterIsolateNodes"
QT_MOC_LITERAL(75, 1150, 7), // "checked"
QT_MOC_LITERAL(76, 1158, 25), // "slotShowFilterEdgesDialog"
QT_MOC_LITERAL(77, 1184, 24), // "slotTransformNodes2Edges"
QT_MOC_LITERAL(78, 1209, 14), // "slotSymmetrize"
QT_MOC_LITERAL(79, 1224, 30), // "slotColorationStrongStructural"
QT_MOC_LITERAL(80, 1255, 21), // "slotColorationRegular"
QT_MOC_LITERAL(81, 1277, 16), // "slotLayoutRandom"
QT_MOC_LITERAL(82, 1294, 24), // "slotLayoutCircularRandom"
QT_MOC_LITERAL(83, 1319, 35), // "slotLayoutCircularByProminenc..."
QT_MOC_LITERAL(84, 1355, 36), // "slotLayoutNodeSizesByProminen..."
QT_MOC_LITERAL(85, 1392, 32), // "slotLayoutLevelByProminenceIndex"
QT_MOC_LITERAL(86, 1425, 16), // "slotLayoutGuides"
QT_MOC_LITERAL(87, 1442, 24), // "slotLayoutSpringEmbedder"
QT_MOC_LITERAL(88, 1467, 21), // "slotLayoutFruchterman"
QT_MOC_LITERAL(89, 1489, 30), // "slotLayoutNodeSizesByOutDegree"
QT_MOC_LITERAL(90, 1520, 29), // "slotLayoutNodeSizesByInDegree"
QT_MOC_LITERAL(91, 1550, 15), // "askAboutWeights"
QT_MOC_LITERAL(92, 1566, 19), // "slotDistancesMatrix"
QT_MOC_LITERAL(93, 1586, 19), // "slotGeodesicsMatrix"
QT_MOC_LITERAL(94, 1606, 17), // "slotGraphDistance"
QT_MOC_LITERAL(95, 1624, 24), // "slotAverageGraphDistance"
QT_MOC_LITERAL(96, 1649, 12), // "slotDiameter"
QT_MOC_LITERAL(97, 1662, 16), // "slotEccentricity"
QT_MOC_LITERAL(98, 1679, 22), // "slotWalksOfGivenLength"
QT_MOC_LITERAL(99, 1702, 14), // "slotTotalWalks"
QT_MOC_LITERAL(100, 1717, 22), // "slotReachabilityMatrix"
QT_MOC_LITERAL(101, 1740, 17), // "slotConnectedness"
QT_MOC_LITERAL(102, 1758, 16), // "slotCliqueCensus"
QT_MOC_LITERAL(103, 1775, 25), // "slotClusteringCoefficient"
QT_MOC_LITERAL(104, 1801, 15), // "slotTriadCensus"
QT_MOC_LITERAL(105, 1817, 17), // "slotCheckSymmetry"
QT_MOC_LITERAL(106, 1835, 19), // "slotInvertAdjMatrix"
QT_MOC_LITERAL(107, 1855, 20), // "slotCentralityDegree"
QT_MOC_LITERAL(108, 1876, 23), // "slotCentralityCloseness"
QT_MOC_LITERAL(109, 1900, 37), // "slotCentralityClosenessInflue..."
QT_MOC_LITERAL(110, 1938, 25), // "slotCentralityBetweenness"
QT_MOC_LITERAL(111, 1964, 25), // "slotCentralityInformation"
QT_MOC_LITERAL(112, 1990, 20), // "slotCentralityStress"
QT_MOC_LITERAL(113, 2011, 19), // "slotCentralityPower"
QT_MOC_LITERAL(114, 2031, 26), // "slotCentralityEccentricity"
QT_MOC_LITERAL(115, 2058, 18), // "slotPrestigeDegree"
QT_MOC_LITERAL(116, 2077, 20), // "slotPrestigePageRank"
QT_MOC_LITERAL(117, 2098, 21), // "slotPrestigeProximity"
QT_MOC_LITERAL(118, 2120, 22), // "slotDisplayNodeNumbers"
QT_MOC_LITERAL(119, 2143, 6), // "toggle"
QT_MOC_LITERAL(120, 2150, 21), // "slotDisplayNodeLabels"
QT_MOC_LITERAL(121, 2172, 29), // "slotDisplayNumbersInsideNodes"
QT_MOC_LITERAL(122, 2202, 22), // "slotChangeAllNodesSize"
QT_MOC_LITERAL(123, 2225, 23), // "slotChangeAllNodesShape"
QT_MOC_LITERAL(124, 2249, 21), // "slotChangeNumbersSize"
QT_MOC_LITERAL(125, 2271, 20), // "slotChangeLabelsSize"
QT_MOC_LITERAL(126, 2292, 27), // "slotDrawEdgesThickAsWeights"
QT_MOC_LITERAL(127, 2320, 19), // "slotDrawEdgesBezier"
QT_MOC_LITERAL(128, 2340, 29), // "slotDisplayEdgesWeightNumbers"
QT_MOC_LITERAL(129, 2370, 23), // "slotConsiderEdgeWeights"
QT_MOC_LITERAL(130, 2394, 16), // "slotDisplayEdges"
QT_MOC_LITERAL(131, 2411, 22), // "slotDisplayEdgesArrows"
QT_MOC_LITERAL(132, 2434, 19), // "slotBackgroundColor"
QT_MOC_LITERAL(133, 2454, 17), // "slotAllNodesColor"
QT_MOC_LITERAL(134, 2472, 17), // "slotAllEdgesColor"
QT_MOC_LITERAL(135, 2490, 19), // "slotAllNumbersColor"
QT_MOC_LITERAL(136, 2510, 18), // "slotAllLabelsColor"
QT_MOC_LITERAL(137, 2529, 16), // "slotAntialiasing"
QT_MOC_LITERAL(138, 2546, 19), // "slotShowProgressBar"
QT_MOC_LITERAL(139, 2566, 14), // "slotPrintDebug"
QT_MOC_LITERAL(140, 2581, 15), // "slotViewToolBar"
QT_MOC_LITERAL(141, 2597, 17), // "slotViewStatusBar"
QT_MOC_LITERAL(142, 2615, 19), // "slotBackgroundImage"
QT_MOC_LITERAL(143, 2635, 8), // "slotTips"
QT_MOC_LITERAL(144, 2644, 8), // "slotHelp"
QT_MOC_LITERAL(145, 2653, 13), // "slotHelpAbout"
QT_MOC_LITERAL(146, 2667, 11), // "slotAboutQt"
QT_MOC_LITERAL(147, 2679, 17), // "nodeInfoStatusBar"
QT_MOC_LITERAL(148, 2697, 5), // "Node*"
QT_MOC_LITERAL(149, 2703, 17), // "edgeInfoStatusBar"
QT_MOC_LITERAL(150, 2721, 5), // "Edge*"
QT_MOC_LITERAL(151, 2727, 19), // "openNodeContextMenu"
QT_MOC_LITERAL(152, 2747, 19), // "openEdgeContextMenu"
QT_MOC_LITERAL(153, 2767, 19), // "windowInfoStatusBar"
QT_MOC_LITERAL(154, 2787, 12), // "graphChanged"
QT_MOC_LITERAL(155, 2800, 16), // "updateNodeCoords"
QT_MOC_LITERAL(156, 2817, 2), // "no"
QT_MOC_LITERAL(157, 2820, 1), // "x"
QT_MOC_LITERAL(158, 2822, 1), // "y"
QT_MOC_LITERAL(159, 2824, 9), // "slotKppTi"
QT_MOC_LITERAL(160, 2834, 12), // "ProcessFiles"
QT_MOC_LITERAL(161, 2847, 3), // "top"
QT_MOC_LITERAL(162, 2851, 9), // "threshold"
QT_MOC_LITERAL(163, 2861, 10), // "slotKppNoa"
QT_MOC_LITERAL(164, 2872, 16), // "addNodeWithMouse"
QT_MOC_LITERAL(165, 2889, 12), // "networkSaved"
QT_MOC_LITERAL(166, 2902, 13), // "statusMessage"
QT_MOC_LITERAL(167, 2916, 17), // "showMessageToUser"
QT_MOC_LITERAL(168, 2934, 8), // "fileType"
QT_MOC_LITERAL(169, 2943, 37), // "toolBoxAnalysisGeodesicsSelec..."
QT_MOC_LITERAL(170, 2981, 40), // "toolBoxAnalysisConnectivitySe..."
QT_MOC_LITERAL(171, 3022, 38), // "toolBoxAnalysisProminenceSele..."
QT_MOC_LITERAL(172, 3061, 42), // "toolBoxAnalysisClusterability..."
QT_MOC_LITERAL(173, 3104, 33), // "toolBoxLayoutByIndexButtonPre..."
QT_MOC_LITERAL(174, 3138, 39), // "toolBoxLayoutForceDirectedBut..."
QT_MOC_LITERAL(175, 3178, 13), // "selectedNodes"
QT_MOC_LITERAL(176, 3192, 21) // "QList<QGraphicsItem*>"

    },
    "MainWindow\0addRelationToGraph\0\0"
    "slotCreateNew\0slotInitVarible\0flagPp\0"
    "slotChooseFile\0slotImportGraphML\0"
    "slotImportPajek\0slotImportSM\0slotImportDot\0"
    "slotImportGML\0slotImportDL\0"
    "slotImportEdgeList\0slotImportTwoModeSM\0"
    "slotFileSave\0slotFileSaveAs\0slotFileClose\0"
    "slotPrintView\0slotExportBMP\0slotExportPNG\0"
    "slotExportPDF\0slotExportPajek\0"
    "slotExportSM\0slotExportDL\0slotExportGW\0"
    "slotExportList\0slotOpenTextEditor\0"
    "slotViewNetworkFile\0findCodecs\0userCodec\0"
    "slotViewAdjacencyMatrix\0"
    "slotShowDataSetSelectDialog\0"
    "slotRecreateDataSet\0slotCreateRandomErdosRenyi\0"
    "createRandomNetErdos\0N\0model\0edges\0"
    "eprob\0mode\0diag\0slotCreateRegularRandomNetwork\0"
    "slotCreateRandomGaussian\0"
    "slotCreateRandomRingLattice\0"
    "slotCreateRandomScaleFree\0"
    "createScaleFreeNetwork\0nodes\0power\0"
    "initialNodes\0edgesPerStep\0zeroAppeal\0"
    "slotCreateRandomSmallWorld\0"
    "createSmallWorldNetwork\0degree\0beta\0"
    "slotShowWebCrawlerDialog\0slotWebCrawl\0"
    "prevRelation\0nextRelation\0addRelation\0"
    "relationName\0slotSelectAll\0slotSelectNone\0"
    "slotFindNode\0slotAddEdge\0slotRemoveNode\0"
    "slotNodeProperties\0slotRemoveEdge\0"
    "slotChangeNodeProperties\0slotChangeEdgeLabel\0"
    "slotChangeEdgeColor\0slotChangeEdgeWeight\0"
    "slotFilterNodes\0slotFilterIsolateNodes\0"
    "checked\0slotShowFilterEdgesDialog\0"
    "slotTransformNodes2Edges\0slotSymmetrize\0"
    "slotColorationStrongStructural\0"
    "slotColorationRegular\0slotLayoutRandom\0"
    "slotLayoutCircularRandom\0"
    "slotLayoutCircularByProminenceIndex\0"
    "slotLayoutNodeSizesByProminenceIndex\0"
    "slotLayoutLevelByProminenceIndex\0"
    "slotLayoutGuides\0slotLayoutSpringEmbedder\0"
    "slotLayoutFruchterman\0"
    "slotLayoutNodeSizesByOutDegree\0"
    "slotLayoutNodeSizesByInDegree\0"
    "askAboutWeights\0slotDistancesMatrix\0"
    "slotGeodesicsMatrix\0slotGraphDistance\0"
    "slotAverageGraphDistance\0slotDiameter\0"
    "slotEccentricity\0slotWalksOfGivenLength\0"
    "slotTotalWalks\0slotReachabilityMatrix\0"
    "slotConnectedness\0slotCliqueCensus\0"
    "slotClusteringCoefficient\0slotTriadCensus\0"
    "slotCheckSymmetry\0slotInvertAdjMatrix\0"
    "slotCentralityDegree\0slotCentralityCloseness\0"
    "slotCentralityClosenessInfluenceRange\0"
    "slotCentralityBetweenness\0"
    "slotCentralityInformation\0"
    "slotCentralityStress\0slotCentralityPower\0"
    "slotCentralityEccentricity\0"
    "slotPrestigeDegree\0slotPrestigePageRank\0"
    "slotPrestigeProximity\0slotDisplayNodeNumbers\0"
    "toggle\0slotDisplayNodeLabels\0"
    "slotDisplayNumbersInsideNodes\0"
    "slotChangeAllNodesSize\0slotChangeAllNodesShape\0"
    "slotChangeNumbersSize\0slotChangeLabelsSize\0"
    "slotDrawEdgesThickAsWeights\0"
    "slotDrawEdgesBezier\0slotDisplayEdgesWeightNumbers\0"
    "slotConsiderEdgeWeights\0slotDisplayEdges\0"
    "slotDisplayEdgesArrows\0slotBackgroundColor\0"
    "slotAllNodesColor\0slotAllEdgesColor\0"
    "slotAllNumbersColor\0slotAllLabelsColor\0"
    "slotAntialiasing\0slotShowProgressBar\0"
    "slotPrintDebug\0slotViewToolBar\0"
    "slotViewStatusBar\0slotBackgroundImage\0"
    "slotTips\0slotHelp\0slotHelpAbout\0"
    "slotAboutQt\0nodeInfoStatusBar\0Node*\0"
    "edgeInfoStatusBar\0Edge*\0openNodeContextMenu\0"
    "openEdgeContextMenu\0windowInfoStatusBar\0"
    "graphChanged\0updateNodeCoords\0no\0x\0y\0"
    "slotKppTi\0ProcessFiles\0top\0threshold\0"
    "slotKppNoa\0addNodeWithMouse\0networkSaved\0"
    "statusMessage\0showMessageToUser\0"
    "fileType\0toolBoxAnalysisGeodesicsSelectChanged\0"
    "toolBoxAnalysisConnectivitySelectChanged\0"
    "toolBoxAnalysisProminenceSelectChanged\0"
    "toolBoxAnalysisClusterabilitySelectChanged\0"
    "toolBoxLayoutByIndexButtonPressed\0"
    "toolBoxLayoutForceDirectedButtonPressed\0"
    "selectedNodes\0QList<QGraphicsItem*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     153,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  779,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  782,    2, 0x0a /* Public */,
       4,    1,  783,    2, 0x0a /* Public */,
       6,    0,  786,    2, 0x0a /* Public */,
       7,    0,  787,    2, 0x0a /* Public */,
       8,    0,  788,    2, 0x0a /* Public */,
       9,    0,  789,    2, 0x0a /* Public */,
      10,    0,  790,    2, 0x0a /* Public */,
      11,    0,  791,    2, 0x0a /* Public */,
      12,    0,  792,    2, 0x0a /* Public */,
      13,    0,  793,    2, 0x0a /* Public */,
      14,    0,  794,    2, 0x0a /* Public */,
      15,    0,  795,    2, 0x0a /* Public */,
      16,    0,  796,    2, 0x0a /* Public */,
      17,    0,  797,    2, 0x0a /* Public */,
      18,    0,  798,    2, 0x0a /* Public */,
      19,    0,  799,    2, 0x0a /* Public */,
      20,    0,  800,    2, 0x0a /* Public */,
      21,    0,  801,    2, 0x0a /* Public */,
      22,    0,  802,    2, 0x0a /* Public */,
      23,    0,  803,    2, 0x0a /* Public */,
      24,    0,  804,    2, 0x0a /* Public */,
      25,    0,  805,    2, 0x0a /* Public */,
      26,    0,  806,    2, 0x0a /* Public */,
      27,    0,  807,    2, 0x0a /* Public */,
      28,    0,  808,    2, 0x0a /* Public */,
      29,    0,  809,    2, 0x0a /* Public */,
      30,    3,  810,    2, 0x0a /* Public */,
      31,    0,  817,    2, 0x0a /* Public */,
      32,    0,  818,    2, 0x0a /* Public */,
      33,    1,  819,    2, 0x0a /* Public */,
      34,    0,  822,    2, 0x0a /* Public */,
      35,    6,  823,    2, 0x0a /* Public */,
      42,    0,  836,    2, 0x0a /* Public */,
      43,    0,  837,    2, 0x0a /* Public */,
      44,    0,  838,    2, 0x0a /* Public */,
      45,    0,  839,    2, 0x0a /* Public */,
      46,    6,  840,    2, 0x0a /* Public */,
      52,    0,  853,    2, 0x0a /* Public */,
      53,    5,  854,    2, 0x0a /* Public */,
      56,    0,  865,    2, 0x0a /* Public */,
      57,    5,  866,    2, 0x0a /* Public */,
      58,    0,  877,    2, 0x0a /* Public */,
      59,    0,  878,    2, 0x0a /* Public */,
      60,    0,  879,    2, 0x0a /* Public */,
      60,    1,  880,    2, 0x0a /* Public */,
      62,    0,  883,    2, 0x0a /* Public */,
      63,    0,  884,    2, 0x0a /* Public */,
      64,    0,  885,    2, 0x0a /* Public */,
      65,    0,  886,    2, 0x0a /* Public */,
      66,    0,  887,    2, 0x0a /* Public */,
      67,    5,  888,    2, 0x0a /* Public */,
      68,    0,  899,    2, 0x0a /* Public */,
      69,    0,  900,    2, 0x0a /* Public */,
      70,    0,  901,    2, 0x0a /* Public */,
      71,    0,  902,    2, 0x0a /* Public */,
      72,    0,  903,    2, 0x0a /* Public */,
      73,    0,  904,    2, 0x0a /* Public */,
      74,    1,  905,    2, 0x0a /* Public */,
      76,    0,  908,    2, 0x0a /* Public */,
      77,    0,  909,    2, 0x0a /* Public */,
      78,    0,  910,    2, 0x0a /* Public */,
      79,    0,  911,    2, 0x0a /* Public */,
      80,    0,  912,    2, 0x0a /* Public */,
      81,    0,  913,    2, 0x0a /* Public */,
      82,    0,  914,    2, 0x0a /* Public */,
      83,    0,  915,    2, 0x0a /* Public */,
      83,    1,  916,    2, 0x0a /* Public */,
      84,    1,  919,    2, 0x0a /* Public */,
      85,    0,  922,    2, 0x0a /* Public */,
      85,    1,  923,    2, 0x0a /* Public */,
      86,    1,  926,    2, 0x0a /* Public */,
      87,    0,  929,    2, 0x0a /* Public */,
      88,    0,  930,    2, 0x0a /* Public */,
      89,    1,  931,    2, 0x0a /* Public */,
      90,    1,  934,    2, 0x0a /* Public */,
      91,    0,  937,    2, 0x0a /* Public */,
      92,    0,  938,    2, 0x0a /* Public */,
      93,    0,  939,    2, 0x0a /* Public */,
      94,    0,  940,    2, 0x0a /* Public */,
      95,    0,  941,    2, 0x0a /* Public */,
      96,    0,  942,    2, 0x0a /* Public */,
      97,    0,  943,    2, 0x0a /* Public */,
      98,    0,  944,    2, 0x0a /* Public */,
      99,    0,  945,    2, 0x0a /* Public */,
     100,    0,  946,    2, 0x0a /* Public */,
     101,    0,  947,    2, 0x0a /* Public */,
     102,    0,  948,    2, 0x0a /* Public */,
     103,    0,  949,    2, 0x0a /* Public */,
     104,    0,  950,    2, 0x0a /* Public */,
     105,    0,  951,    2, 0x0a /* Public */,
     106,    0,  952,    2, 0x0a /* Public */,
     107,    0,  953,    2, 0x0a /* Public */,
     108,    0,  954,    2, 0x0a /* Public */,
     109,    0,  955,    2, 0x0a /* Public */,
     110,    0,  956,    2, 0x0a /* Public */,
     111,    0,  957,    2, 0x0a /* Public */,
     112,    0,  958,    2, 0x0a /* Public */,
     113,    0,  959,    2, 0x0a /* Public */,
     114,    0,  960,    2, 0x0a /* Public */,
     115,    0,  961,    2, 0x0a /* Public */,
     116,    0,  962,    2, 0x0a /* Public */,
     117,    0,  963,    2, 0x0a /* Public */,
     118,    1,  964,    2, 0x0a /* Public */,
     120,    1,  967,    2, 0x0a /* Public */,
     121,    1,  970,    2, 0x0a /* Public */,
     122,    0,  973,    2, 0x0a /* Public */,
     123,    0,  974,    2, 0x0a /* Public */,
     124,    0,  975,    2, 0x0a /* Public */,
     125,    0,  976,    2, 0x0a /* Public */,
     126,    0,  977,    2, 0x0a /* Public */,
     127,    1,  978,    2, 0x0a /* Public */,
     128,    1,  981,    2, 0x0a /* Public */,
     129,    1,  984,    2, 0x0a /* Public */,
     130,    1,  987,    2, 0x0a /* Public */,
     131,    1,  990,    2, 0x0a /* Public */,
     132,    0,  993,    2, 0x0a /* Public */,
     133,    0,  994,    2, 0x0a /* Public */,
     134,    0,  995,    2, 0x0a /* Public */,
     135,    0,  996,    2, 0x0a /* Public */,
     136,    0,  997,    2, 0x0a /* Public */,
     137,    1,  998,    2, 0x0a /* Public */,
     138,    1, 1001,    2, 0x0a /* Public */,
     139,    1, 1004,    2, 0x0a /* Public */,
     140,    1, 1007,    2, 0x0a /* Public */,
     141,    1, 1010,    2, 0x0a /* Public */,
     142,    1, 1013,    2, 0x0a /* Public */,
     143,    0, 1016,    2, 0x0a /* Public */,
     144,    0, 1017,    2, 0x0a /* Public */,
     145,    0, 1018,    2, 0x0a /* Public */,
     146,    0, 1019,    2, 0x0a /* Public */,
     147,    1, 1020,    2, 0x0a /* Public */,
     149,    1, 1023,    2, 0x0a /* Public */,
     151,    0, 1026,    2, 0x0a /* Public */,
     152,    0, 1027,    2, 0x0a /* Public */,
     153,    2, 1028,    2, 0x0a /* Public */,
     154,    0, 1033,    2, 0x0a /* Public */,
     155,    3, 1034,    2, 0x0a /* Public */,
     159,    0, 1041,    2, 0x0a /* Public */,
     160,    3, 1042,    2, 0x0a /* Public */,
     163,    0, 1049,    2, 0x0a /* Public */,
     164,    2, 1050,    2, 0x0a /* Public */,
     165,    1, 1055,    2, 0x0a /* Public */,
     166,    1, 1058,    2, 0x0a /* Public */,
     167,    1, 1061,    2, 0x0a /* Public */,
     168,    5, 1064,    2, 0x0a /* Public */,
     169,    1, 1075,    2, 0x0a /* Public */,
     170,    1, 1078,    2, 0x0a /* Public */,
     171,    1, 1081,    2, 0x0a /* Public */,
     172,    1, 1084,    2, 0x0a /* Public */,
     173,    0, 1087,    2, 0x0a /* Public */,
     174,    0, 1088,    2, 0x0a /* Public */,
     175,    0, 1089,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Float, QMetaType::QString, QMetaType::Bool,   36,   37,   38,   39,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::QString,   47,   48,   49,   50,   51,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::QString, QMetaType::Bool,   47,   54,   55,   40,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QColor, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void, QMetaType::Bool,  119,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 148,    2,
    QMetaType::Void, 0x80000000 | 150,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  156,  157,  158,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::Float, QMetaType::Bool,  161,  162,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 176,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRelationToGraph((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotCreateNew(); break;
        case 2: _t->slotInitVarible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotChooseFile(); break;
        case 4: _t->slotImportGraphML(); break;
        case 5: _t->slotImportPajek(); break;
        case 6: _t->slotImportSM(); break;
        case 7: _t->slotImportDot(); break;
        case 8: _t->slotImportGML(); break;
        case 9: _t->slotImportDL(); break;
        case 10: _t->slotImportEdgeList(); break;
        case 11: _t->slotImportTwoModeSM(); break;
        case 12: _t->slotFileSave(); break;
        case 13: _t->slotFileSaveAs(); break;
        case 14: _t->slotFileClose(); break;
        case 15: _t->slotPrintView(); break;
        case 16: { bool _r = _t->slotExportBMP();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->slotExportPNG();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->slotExportPDF();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->slotExportPajek(); break;
        case 20: _t->slotExportSM(); break;
        case 21: { bool _r = _t->slotExportDL();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->slotExportGW();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->slotExportList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->slotOpenTextEditor(); break;
        case 25: _t->slotViewNetworkFile(); break;
        case 26: _t->findCodecs(); break;
        case 27: _t->userCodec((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 28: _t->slotViewAdjacencyMatrix(); break;
        case 29: _t->slotShowDataSetSelectDialog(); break;
        case 30: _t->slotRecreateDataSet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->slotCreateRandomErdosRenyi(); break;
        case 32: _t->createRandomNetErdos((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6]))); break;
        case 33: _t->slotCreateRegularRandomNetwork(); break;
        case 34: _t->slotCreateRandomGaussian(); break;
        case 35: _t->slotCreateRandomRingLattice(); break;
        case 36: _t->slotCreateRandomScaleFree(); break;
        case 37: _t->createScaleFreeNetwork((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 38: _t->slotCreateRandomSmallWorld(); break;
        case 39: _t->createSmallWorldNetwork((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const bool(*)>(_a[5]))); break;
        case 40: _t->slotShowWebCrawlerDialog(); break;
        case 41: _t->slotWebCrawl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 42: _t->prevRelation(); break;
        case 43: _t->nextRelation(); break;
        case 44: _t->addRelation(); break;
        case 45: _t->addRelation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->slotSelectAll(); break;
        case 47: _t->slotSelectNone(); break;
        case 48: _t->slotFindNode(); break;
        case 49: _t->slotAddEdge(); break;
        case 50: _t->slotRemoveNode(); break;
        case 51: _t->slotNodeProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 52: _t->slotRemoveEdge(); break;
        case 53: _t->slotChangeNodeProperties(); break;
        case 54: _t->slotChangeEdgeLabel(); break;
        case 55: _t->slotChangeEdgeColor(); break;
        case 56: _t->slotChangeEdgeWeight(); break;
        case 57: _t->slotFilterNodes(); break;
        case 58: _t->slotFilterIsolateNodes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->slotShowFilterEdgesDialog(); break;
        case 60: _t->slotTransformNodes2Edges(); break;
        case 61: _t->slotSymmetrize(); break;
        case 62: _t->slotColorationStrongStructural(); break;
        case 63: _t->slotColorationRegular(); break;
        case 64: _t->slotLayoutRandom(); break;
        case 65: _t->slotLayoutCircularRandom(); break;
        case 66: _t->slotLayoutCircularByProminenceIndex(); break;
        case 67: _t->slotLayoutCircularByProminenceIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 68: _t->slotLayoutNodeSizesByProminenceIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 69: _t->slotLayoutLevelByProminenceIndex(); break;
        case 70: _t->slotLayoutLevelByProminenceIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 71: _t->slotLayoutGuides((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->slotLayoutSpringEmbedder(); break;
        case 73: _t->slotLayoutFruchterman(); break;
        case 74: _t->slotLayoutNodeSizesByOutDegree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->slotLayoutNodeSizesByInDegree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->askAboutWeights(); break;
        case 77: _t->slotDistancesMatrix(); break;
        case 78: _t->slotGeodesicsMatrix(); break;
        case 79: _t->slotGraphDistance(); break;
        case 80: _t->slotAverageGraphDistance(); break;
        case 81: _t->slotDiameter(); break;
        case 82: _t->slotEccentricity(); break;
        case 83: _t->slotWalksOfGivenLength(); break;
        case 84: _t->slotTotalWalks(); break;
        case 85: _t->slotReachabilityMatrix(); break;
        case 86: _t->slotConnectedness(); break;
        case 87: _t->slotCliqueCensus(); break;
        case 88: _t->slotClusteringCoefficient(); break;
        case 89: _t->slotTriadCensus(); break;
        case 90: _t->slotCheckSymmetry(); break;
        case 91: _t->slotInvertAdjMatrix(); break;
        case 92: _t->slotCentralityDegree(); break;
        case 93: _t->slotCentralityCloseness(); break;
        case 94: _t->slotCentralityClosenessInfluenceRange(); break;
        case 95: _t->slotCentralityBetweenness(); break;
        case 96: _t->slotCentralityInformation(); break;
        case 97: _t->slotCentralityStress(); break;
        case 98: _t->slotCentralityPower(); break;
        case 99: _t->slotCentralityEccentricity(); break;
        case 100: _t->slotPrestigeDegree(); break;
        case 101: _t->slotPrestigePageRank(); break;
        case 102: _t->slotPrestigeProximity(); break;
        case 103: _t->slotDisplayNodeNumbers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->slotDisplayNodeLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 105: _t->slotDisplayNumbersInsideNodes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 106: _t->slotChangeAllNodesSize(); break;
        case 107: _t->slotChangeAllNodesShape(); break;
        case 108: _t->slotChangeNumbersSize(); break;
        case 109: _t->slotChangeLabelsSize(); break;
        case 110: _t->slotDrawEdgesThickAsWeights(); break;
        case 111: _t->slotDrawEdgesBezier((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->slotDisplayEdgesWeightNumbers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: _t->slotConsiderEdgeWeights((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 114: _t->slotDisplayEdges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 115: _t->slotDisplayEdgesArrows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: _t->slotBackgroundColor(); break;
        case 117: _t->slotAllNodesColor(); break;
        case 118: _t->slotAllEdgesColor(); break;
        case 119: _t->slotAllNumbersColor(); break;
        case 120: _t->slotAllLabelsColor(); break;
        case 121: _t->slotAntialiasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 122: _t->slotShowProgressBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 123: _t->slotPrintDebug((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 124: _t->slotViewToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 125: _t->slotViewStatusBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 126: _t->slotBackgroundImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 127: _t->slotTips(); break;
        case 128: _t->slotHelp(); break;
        case 129: _t->slotHelpAbout(); break;
        case 130: _t->slotAboutQt(); break;
        case 131: _t->nodeInfoStatusBar((*reinterpret_cast< Node*(*)>(_a[1]))); break;
        case 132: _t->edgeInfoStatusBar((*reinterpret_cast< Edge*(*)>(_a[1]))); break;
        case 133: _t->openNodeContextMenu(); break;
        case 134: _t->openEdgeContextMenu(); break;
        case 135: _t->windowInfoStatusBar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 136: _t->graphChanged(); break;
        case 137: _t->updateNodeCoords((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 138: _t->slotKppTi(); break;
        case 139: { bool _r = _t->ProcessFiles((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 140: _t->slotKppNoa(); break;
        case 141: _t->addNodeWithMouse((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 142: _t->networkSaved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 143: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 144: _t->showMessageToUser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 145: _t->fileType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 146: _t->toolBoxAnalysisGeodesicsSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 147: _t->toolBoxAnalysisConnectivitySelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 148: _t->toolBoxAnalysisProminenceSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 149: _t->toolBoxAnalysisClusterabilitySelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 150: _t->toolBoxLayoutByIndexButtonPressed(); break;
        case 151: _t->toolBoxLayoutForceDirectedButtonPressed(); break;
        case 152: { QList<QGraphicsItem*> _r = _t->selectedNodes();
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::addRelationToGraph)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 153)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 153;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 153)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 153;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::addRelationToGraph(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
