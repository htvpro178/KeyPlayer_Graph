#ifndef EDGE_H
#define EDGE_H

using namespace std;

#include <QGraphicsItem>
#include <QObject>
#include <utility> //declares pair construct


class GraphicsWidget;
class QGraphicsSceneMouseEvent;
class Node;
class EdgeWeight;


static const int TypeEdge= QGraphicsItem::UserType+2;


class Edge : public QObject, public QGraphicsItem {
	Q_OBJECT
	Q_INTERFACES (QGraphicsItem)

public:
    Edge(GraphicsWidget *, Node*, Node*,
         const Qt::PenStyle &style,
         const float &, const int &, const QString &,
         const bool&, const bool&, const bool &);
    ~Edge();
	enum { Type = UserType + 2 };
	int type() const { return Type; }
	Node *sourceNode() const;
	void setSourceNode(Node *node);

	Node *targetNode() const;
	void setTargetNode(Node *node);
	
	void setStartOffset(int );
	void setEndOffset(int );
	void removeRefs();

	int sourceNodeNumber();
	int targetNodeNumber();
    void setWeight( const float  &w) ;

    float weight() const;
    void addWeight (EdgeWeight* canvasWeight  ) ;
    void clearWeightList();

    void showArrows(bool);
    void toggleAntialiasing(bool);

    void makeReciprocal();
    void unmakeReciprocal();
    bool isReciprocal();

    float width() const;

    QPen pen() const;
    void setStyle( const Qt::PenStyle  &style);
    Qt::PenStyle style() const;

    void setColor( const QString &str) ;
    QString color() const ;
    QString colorToPajek();

	QPainterPath shape() const;

public slots:
	void adjust ();

protected:
	QRectF boundingRect() const;
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
	void mousePressEvent(QGraphicsSceneMouseEvent *event);


private:
	GraphicsWidget *graphicsWidget;
	Node *source, *target;
	QPointF sourcePoint, targetPoint;
	qreal m_arrowSize, m_startOffset, m_endOffset;
    Qt::PenStyle m_style;
	list<EdgeWeight*> weightList;
	QString m_color;
	int eFrom, eTo;
	float m_weight;
	int tox1, tox2, toy1, toy2, size;
	double rad, theta, theta1, theta2;
	qreal angle, line_length, line_dx, line_dy;
	bool m_Bezier, m_drawArrows, m_reciprocal;
};

#endif
