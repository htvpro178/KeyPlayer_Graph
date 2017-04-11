#ifndef MAINWINDOW_H
#define MAINWINDOW_H


/** \file mainwindow.h

 \brief Documentation for the mainwindow file.

*/

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPrinter>

/** SocNetV specific includes*/

#include <math.h>
#include "graphicswidget.h"
#include "graph.h"
#include "filteredgesbyweightdialog.h"
#include "webcrawlerdialog.h"
#include "nodeeditdialog.h"
#include "datasetselectdialog.h"

static const QString VERSION="2.0";


using namespace std;

class QMenu;
class QAction;
class QCheckBox;
class QProgressDialog;
class Edge;
class Node;

class QPushButton;
class QLCDNumber;
class QSlider;
class QComboBox;	
class QGroupBox;
class QTabWidget;
class QSpinBox;
class PreviewForm;

class RandErdosRenyiDialog;
class RandSmallWorldDialog;
class RandScaleFreeDialog;


/**
  \brief The base window of SocNetV contains all widgets and functionality.

    It sets up the main window and provides a menubar, toolbar and statusbar.
    For the main view, an instance of class GraphicsWidget is
    created which creates a graphics widget.
 */


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    GraphicsWidget *graphicsWidget;

    MainWindow(const QString &f);
    ~MainWindow();

    void initActions();
    void initMenuBar();
    void initToolBar();
    void initToolBox();
    void initStatusBar();
    void initNet();
    void initView();

    void setLastPath(QString filePath);
    QString getLastPath();
    void createFortuneCookies();
    void createTips();

    bool showLabels();
    bool showNumbersInsideNodes();
    bool showNumbers();


    /// \brief  Main network file loader methods
    bool previewNetworkFile(QString , int );

    ///
    /// \brief Main network file loader method
    /// First, inits everything to default values.
    /// Then calls activeGraph::loadGraph to actually load the network...
    /// \param m_fileName
    /// \param m_fileFormat
    bool loadNetworkFile ( const QString, const QString, const int );

    int activeEdges();
    int activeNodes();

    void openContextMenu(const QPointF & mPos);

    void changeAllNodesSize(int size);

    QString initNodeColor;
    int clickedJimNumber; //it is public because we need to be visible from activegraph.

    void createProgressBar();
    void destroyProgressBar();

public slots:
    //FILE MENU

    /// \brief        Creates a new network
    void slotCreateNew();
	void slotInitVarible( bool flagPp);

    /// \brief  Prompts the user a directory dialogue to choose a file from.
    /// Calls previewNetworkFile()
    void slotChooseFile();
    void slotImportGraphML();
    void slotImportPajek();
    void slotImportSM();
    void slotImportDot();
    void slotImportGML();
    void slotImportDL();
    void slotImportEdgeList();
    void slotImportTwoModeSM();
    void slotFileSave();
    void slotFileSaveAs();
    void slotFileClose();
    void slotPrintView();
    bool slotExportBMP();
    bool slotExportPNG();
    bool slotExportPDF();
    void slotExportPajek();
    void slotExportSM();
    bool slotExportDL();
    bool slotExportGW();
    bool slotExportList();
    //NETWORK MENU
    void slotOpenTextEditor();
    void slotViewNetworkFile();

    void findCodecs();
    void userCodec(const QString, const QString, const int );

    void slotViewAdjacencyMatrix();
    void slotShowDataSetSelectDialog();
    void slotRecreateDataSet(QString);
    void slotCreateRandomErdosRenyi();
    void createRandomNetErdos( const int N,
                               const QString model,
                               const int edges,
                               const float eprob,
                               const QString mode,
                               const bool diag) ;
    void slotCreateRegularRandomNetwork();
    void slotCreateRandomGaussian();
    void slotCreateRandomRingLattice();
    void slotCreateRandomScaleFree();

    void createScaleFreeNetwork (const int &nodes,
                                 const int &power,
                                 const int &initialNodes,
                                 const int &edgesPerStep,
                                 const float &zeroAppeal,
                                 const QString &mode);

    void slotCreateRandomSmallWorld();

    void createSmallWorldNetwork (const int &nodes,
                                   const int &degree,
                                   const float &beta,
                                   const QString &mode,
                                   const bool &diag);
    void slotShowWebCrawlerDialog();
    void slotWebCrawl(QString, int, int, bool, bool);

    void prevRelation();
    void nextRelation();
    void addRelation();
    void addRelation(QString relationName);

    //EDIT MENU
    void slotSelectAll();
    void slotSelectNone();
    void slotFindNode();
    void slotAddEdge();
    void slotRemoveNode();
    void slotNodeProperties( const QString, const int, const QString,
                             const QColor, const QString);
    void slotRemoveEdge();
    void slotChangeNodeProperties();
    void slotChangeEdgeLabel();
    void slotChangeEdgeColor();
    void slotChangeEdgeWeight();
    void slotFilterNodes();
    void slotFilterIsolateNodes(bool checked);
    void slotShowFilterEdgesDialog();
    void slotTransformNodes2Edges();
    void slotSymmetrize();

    // LAYOUT MENU
    void slotColorationStrongStructural();
    void slotColorationRegular();
    void slotLayoutRandom();
    void slotLayoutCircularRandom();
    void slotLayoutCircularByProminenceIndex();
    void slotLayoutCircularByProminenceIndex(QString);
    void slotLayoutNodeSizesByProminenceIndex(QString);
    void slotLayoutLevelByProminenceIndex();
    void slotLayoutLevelByProminenceIndex(QString);
    void slotLayoutGuides(int);


    void slotLayoutSpringEmbedder();
    void slotLayoutFruchterman();


    void  slotLayoutNodeSizesByOutDegree(bool);
    void  slotLayoutNodeSizesByInDegree(bool);

    //STATISTICS MENU
    void askAboutWeights();
    void slotDistancesMatrix();
    void slotGeodesicsMatrix();
    void slotGraphDistance();
    void slotAverageGraphDistance();
    void slotDiameter();
    void slotEccentricity();

    void slotWalksOfGivenLength();
    void slotTotalWalks();
    void slotReachabilityMatrix();
    void slotConnectedness();

    void slotCliqueCensus();
    void slotClusteringCoefficient();
    void slotTriadCensus();
    void slotCheckSymmetry();
    void slotInvertAdjMatrix();

    void slotCentralityDegree();
    void slotCentralityCloseness();
    void slotCentralityClosenessInfluenceRange();
    void slotCentralityBetweenness();
    void slotCentralityInformation();
    void slotCentralityStress();
    void slotCentralityPower();
    void slotCentralityEccentricity();

    void slotPrestigeDegree();
    void slotPrestigePageRank();
    void slotPrestigeProximity();

    //OPTIONS MENU
    void slotDisplayNodeNumbers(bool toggle);
    void slotDisplayNodeLabels(bool toggle);
    void slotDisplayNumbersInsideNodes(bool toggle);
    void slotChangeAllNodesSize();
    void slotChangeAllNodesShape();
    void slotChangeNumbersSize();
    void slotChangeLabelsSize();
    void slotDrawEdgesThickAsWeights();
    void slotDrawEdgesBezier(bool toggle);
    void slotDisplayEdgesWeightNumbers(bool toggle);
    void slotConsiderEdgeWeights(bool);
    void slotDisplayEdges(bool toggle);
    void slotDisplayEdgesArrows(bool toggle);

    void slotBackgroundColor ();
    void slotAllNodesColor();
    void slotAllEdgesColor();
    void slotAllNumbersColor();
    void slotAllLabelsColor();

    //VIEW MENU
    void slotAntialiasing(bool );
    void slotShowProgressBar(bool toggle);
    void slotPrintDebug(bool toggle);
    void slotViewToolBar(bool toggle);
    void slotViewStatusBar(bool toggle);
    void slotBackgroundImage(bool toggle);

    //HELP MENU
    void slotTips();
    void slotHelp();
    void slotHelpAbout();
    void slotAboutQt();
    //PUBLICLY AVAILABLE SLOTS. CALLED FROM GRAPHICSVIEW
    void nodeInfoStatusBar(Node*);
    void edgeInfoStatusBar (Edge*);
    void openNodeContextMenu();
    void openEdgeContextMenu() ;
    void windowInfoStatusBar(int, int);
    void graphChanged();

    //Called by graphicswidget to update node coords in activeGraph
    void updateNodeCoords(int no, int x, int y);

    //Called when user pushes the New Node button on the MW
    void slotKppTi();
	bool ProcessFiles(int top, float threshold, bool flagPp);
    //Called by graphicswidget when the user middle-clicks
    void slotKppNoa();
    //Called by graphicswidget when the user double-clicks
    void addNodeWithMouse(int, QPointF);

    //Called by Graph on saving file. int is the network type saved.
    void networkSaved(int);

    //Called by Graph to display some message to the user
    void statusMessage(const QString);
    void showMessageToUser(const QString);

    //Called from Graph when a network file is loaded.
    void fileType(int, QString , int, int, bool);

    //Called from MW, when user highlights something in the toolbox Comboboxes
    void toolBoxAnalysisGeodesicsSelectChanged(int);
    void toolBoxAnalysisConnectivitySelectChanged(int);
    void toolBoxAnalysisProminenceSelectChanged(int);
    void toolBoxAnalysisClusterabilitySelectChanged(int);
    void toolBoxLayoutByIndexButtonPressed();
    void toolBoxLayoutForceDirectedButtonPressed();

    QList<QGraphicsItem *> selectedNodes();

protected:
    void resizeEvent( QResizeEvent * );
    void closeEvent( QCloseEvent* ce );


    //	void myMessageOutput(QtMsgType type, const char *msg);
signals:
    void addRelationToGraph(QString);

private:

    QGraphicsScene *scene;

    FilterEdgesByWeightDialog m_filterEdgesByWeightDialog;
    WebCrawlerDialog m_WebCrawlerDialog;

    NodeEditDialog *m_nodeEditDialog;

    RandErdosRenyiDialog *m_randErdosRenyiDialog;
    RandSmallWorldDialog *m_randSmallWorldDialog;
    RandScaleFreeDialog *m_randScaleFreeDialog;

    PreviewForm *previewForm;
    QList<QTextCodec *> codecs;
    QString userSelectedCodecName;
    DataSetSelectDialog m_datasetSelectDialog;
    Graph activeGraph;
    QPrinter *printer;
    QToolBar *toolBar;
    QComboBox *zoomCombo, *changeRelationCombo;
    QTabWidget *toolBox;

    QProgressDialog *progressDialog;

    Node *clickedJim;
    Edge *clickedEdge;

    QMenu *importSubMenu, *exportSubMenu, *editMenu, *statMenu,  *helpMenu;
    QMenu *optionsMenu, *colorOptionsMenu, *edgeOptionsMenu, *nodeOptionsMenu, *viewOptionsMenu;
    QMenu *editNodeMenu, *editEdgeMenu, *centrlMenu, *layoutMenu;
    QMenu *networkMenu, *randomNetworkMenu, *filterMenu;
    QMenu *randomLayoutMenu, *circleLayoutMenu, *levelLayoutMenu, *physicalLayoutMenu;
    QMenu *colorationMenu;
    QCheckBox  *nodeSizesByOutDegreeBx,*nodeSizesByInDegreeBx, *layoutGuidesBx;
    QComboBox *toolBoxAnalysisGeodesicsSelect,*toolBoxAnalysisConnectivitySelect,
            *toolBoxAnalysisProminenceSelect, *toolBoxAnalysisClusterabilitySelect;
    QComboBox *toolBoxLayoutByIndexSelect, *toolBoxLayoutByIndexTypeSelect;
    QComboBox *toolBoxLayoutForceDirectedSelect;

    QPushButton *kppTi, *kppNoa, *removeNodeBt, *removeEdgeBt;
    QPushButton *toolBoxLayoutByIndexButton, *toolBoxLayoutForceDirectedButton;
	QLineEdit *numKey1, *numKey2, *threshold;
	QLabel *result11, *result12, *result21, *result22, *status1, *status2, *startTime1, *endTime1, *startTime2, *endTime2;
    QSpinBox *rotateSpinBox ;

    QAction *fileNew, *fileOpen, *fileSave, *fileSaveAs,*fileClose, *printNetwork,*fileQuit;
    QAction *exportBMP, *exportPNG, *exportPajek, *exportPDF, *exportDL, *exportGW, *exportSM, *exportList;
    QAction *importPajek,*importSM, *importList,  *importDot , *importDL, *importTwoModeSM;

    QAction *viewNetworkFileAct, *openTextEditorAct, *viewSociomatrixAct, *recreateDataSetAct;

    QAction *createErdosRenyiRandomNetworkAct, *createGaussianRandomNetworkAct;
    QAction *createLatticeNetworkAct, *createScaleFreeRandomNetworkAct;
    QAction *createSmallWorldRandomNetworkAct, *createRegularRandomNetworkAct;

    QAction *displayNodeNumbersAct, *displayNodeLabelsAct, *displayNumbersInsideNodesAct;
    QAction *selectNoneAct, *selectAllAct;
    QAction *findNodeAct,*addNodeAct, *addEdgeAct, *removeNodeAct, *propertiesNodeAct, *removeEdgeAct;
    QAction *changeNumbersSizeAct;
    QAction *changeLabelsSizeAct, *changeAllNodesSizeAct, *changeAllNodesShapeAct;
    QAction *changeEdgeLabelAct, *changeEdgeColorAct, *changeEdgeWeightAct;
    QAction *filterNodesAct, *filterIsolateNodesAct, *filterEdgesAct, *transformNodes2EdgesAct, *symmetrizeAct;
    QAction *changeBackColorAct, *changeAllNodesColorAct, *changeAllEdgesColorAct, *changeAllNumbersColorAct,
            *changeAllLabelsColorAct;
    QAction *drawEdgesWeightsAct, *displayEdgesWeightNumbersAct, *displayEdgesAct;
    QAction *displayEdgesArrowsAct, *drawEdgesBezier,*considerEdgeWeightsAct;
    QAction *backgroundImageAct, *viewToolBar, *viewStatusBar, *helpAboutApp, *helpAboutQt, *helpApp, *tipsApp;
    QAction *antialiasingAct;
    QAction *webCrawlerAct;

    QAction *netDensity, *symmetryAct, *graphDistanceAct, *averGraphDistanceAct,
            *distanceMatrixAct, *geodesicsMatrixAct, *diameterAct, *eccentricityAct;
    QAction *walksAct,*totalWalksAct, *reachabilityMatrixAct, *connectednessAct;
    QAction *cliquesAct, *clusteringCoefAct, *triadCensusAct, *invertAdjMatrixAct;
    QAction *cDegreeAct, *cInDegreeAct, *cClosenessAct, *cInfluenceRangeClosenessAct,
            *cBetweennessAct, *cInformationAct, *cPageRankAct, *cStressAct,
            *cPowerAct, *cEccentAct, *cProximityPrestigeAct;
    QAction *randLayoutAct, *randCircleLayoutAct, *clearGuidesAct;
    QAction *layoutCircular_DC_Act, *layoutCircular_DP_Act,
    *layoutCircular_CC_Act, *layoutCircular_SC_Act, *layoutCircular_EC_Act,
    *layoutCircular_PC_Act, *layoutCircular_BC_Act, *layoutCircular_IC_Act,
    *layoutCircular_IRCC_Act,*layoutCircular_PRP_Act, *layoutCircular_PP_Act;
    QAction *layoutLevel_DC_Act, *layoutLevel_DP_Act,
    *layoutLevel_CC_Act, *layoutLevel_SC_Act, *layoutLevel_EC_Act,
    *layoutLevel_PC_Act, *layoutLevel_BC_Act, *layoutLevel_IC_Act,
    *layoutLevel_IRCC_Act,*layoutLevel_PRP_Act, *layoutLevel_PP_Act;
    QAction *strongColorationAct, *regularColorationAct, *showProgressBarAct, *printDebugAct;
    QAction *springLayoutAct, *FRLayoutAct;
    QAction *nodeSizesByOutDegreeAct,  *nodeSizesByInDegreeAct;
    QAction *zoomInAct, *zoomOutAct ;
    QAction *nextRelationAct, *prevRelationAct, *addRelationAct;

    QString fileName, networkName, previous_fileName;
    QString dataDir, lastUsedDirPath;
    QStringList fileNameNoPath, fortuneCookie, rgbValues;
    QStringList tempFileNameNoPath, tips;
    int statusBarDuration,  minDuration, progressCounter;
    int maxNodes;
    int initNodeSize, labelDistance, numberDistance,initNumberSize, initLabelSize;
    int fortuneCookiesCounter,  tipsCounter;
    //QString VERSION;
    bool pajekFileLoaded, adjacencyFileLoaded, dotFileLoaded, graphMLFileLoaded;
    bool fileLoaded, checkSelectFileType;
    int fileFormat;
    bool networkModified;
    bool bezier,  edgeClicked, nodeClicked, markedNodesExist, showProgressBar, firstTime;
    bool considerWeights, inverseWeights, askedAboutWeights;
    QString initFileCodec;
    QString initEdgeColor, initNumberColor,  initNodeShape, initLabelColor;
    QColor initBackgroundColor;
    QPointF cursorPosGW;	//Carries the position of the cursor in graphicsWidget coordinates
    QLCDNumber  *inDegreeLCD, *outDegreeLCD , *selectedNodeLCD, *clucofLCD;
    QLCDNumber *nodesLCD, *edgesLCD, *densityLCD;

    QDateTime actualDateTime, actualDate, actualTime;
    QTime eTime;     //used  to time algorithms.


};
#endif 

