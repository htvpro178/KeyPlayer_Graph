#ifndef GRAPHICSWIDGET_H
#define GRAPHICSWIDGET_H



#include <QGraphicsView>


class MainWindow;
class Node;
class Edge;
class NodeNumber;
class NodeLabel;
class Guide;
class EdgeWeight;

typedef QHash<QString, Edge*> H_StrToEdge;
typedef QHash <long int, Node*> H_NumToNode;

class GraphicsWidget : public QGraphicsView {
    Q_OBJECT
public:
    GraphicsWidget(QGraphicsScene*, MainWindow* parent);
    ~GraphicsWidget();
    void clear();

    Node* hasNode(QString text);
    //	Node* hasNode(int number);
    bool setMarkedNode(QString text);

    QList<QGraphicsItem *> selectedItems();

    void selectAll();
    void selectNone();

    void removeItem(Edge*);
    void removeItem(Node*);
    void removeItem(NodeNumber*);
    void removeItem(NodeLabel*);
    void nodeMoved(int, int, int);

    void setInitNodeColor(QString);
    void setInitLinkColor(QString);
    void setInitNodeSize(int);
    void setInitNumberDistance(int);
    void setInitLabelDistance(int);

    void setNumbersInsideNodes(bool);

    bool setEdgeWeight(int, int, float);

    void setAllItemsVisibility(int, bool);

    void removeAllItems(int);
protected:
    void wheelEvent(QWheelEvent *event);
    void mouseDoubleClickEvent ( QMouseEvent * e );
    void mousePressEvent ( QMouseEvent * e );
    void mouseReleaseEvent(QMouseEvent * e );
    void resizeEvent( QResizeEvent *e );
    void paintEvent ( QPaintEvent * event );

public slots:
    void changeRelation(int relation);

    void drawNode(	int i, int size, QString aColor,
                    QString nColor, int nSize,
                    QString label, QString lColor, int lSize,
                    QPointF p,
                    QString nodeShape,
                    bool showLabels, bool labelIn, bool showNumbers
                    );
    void eraseNode(long int doomedJim);
    void setNodeVisibility(long int, bool );	//Called from Graph via MW
    bool setNodeColor(long int, QString);
    bool setNodeLabel(long int , QString );
    void openNodeContextMenu();
    void nodeClicked(Node *);
    void moveNode(int, qreal, qreal);	//Called from Graph when creating random nets.
    bool setNodeSize(long int, int size=0);
    void setAllNodeSize(int size=0);

    void drawEdge(int, int, float, bool, bool, QString, bool);
	void drawEdge1(int, int, float, float, bool, bool, QString, bool);
    void eraseEdge(int, int);
    void setEdgeVisibility (int relation, int, int, bool);
    void setEdgeColor(long int, long int, QString);
    void edgeClicked(Edge *);
    void openEdgeContextMenu();

    void changeZoom(const int value);
    void startEdge(Node *node);
    void drawEdgeReciprocal(int, int);
    void unmakeEdgeReciprocal(int, int);

    void clearGuides();
    void addGuideCircle( int x0, int y0, int radius);
    void addGuideHLine(int y0);
    void zoomIn();
    void zoomOut();
    void rot(int angle);

signals:
    void windowResized(int,int);
    void userDoubleClicked(int, QPointF);
    void userMiddleClicked(int, int, float);
    void openNodeMenu();
    void openEdgeMenu();
    void openContextMenu(const QPointF p);
    void updateNodeCoords(int, int, int);
    void selectedNode(Node *);
    void selectedEdge(Edge *);
    void zoomChanged(int);



private:
    H_NumToNode nodeHash;	//This is used in drawEdge() method
    H_StrToEdge edgesHash; // helper hash to easily find edges
    int m_curRelation;
    int  m_nodeSize, m_numberDistance, m_labelDistance;
    double m_currentScaleFactor;
    int m_currentRotationAngle;
    int zoomIndex, markedNodeOrigSize,markedEdgeSourceOrigSize, markedEdgeTargetOrigSize;
    QString m_nodeLabel, m_numberColor, m_nodeColor, m_labelColor, m_linkColor;
    bool secondDoubleClick, markedNodeExist, markedEdgeExist;
    QGraphicsItem *moving;
    QPointF startPoint, endPoint;
    Node *firstNode, *secondNode, *markedNode1, *markedEdgeSource;
    Node *markedEdgeTarget, *tempNode ;

};

#endif
