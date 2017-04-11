#ifndef Guide_H
#define Guide_H



#include <QGraphicsItem>
#include <QObject>


class GraphicsWidget;

static const int TypeGuide = QGraphicsItem::UserType+6;

class Guide : public QObject, public  QGraphicsItem {
	Q_OBJECT
	Q_INTERFACES (QGraphicsItem)

public:
    Guide(GraphicsWidget *, int, int, int );
    Guide(GraphicsWidget *, int, int );
	enum { Type = UserType + 6 };
	int type() const { return Type; }
	void die();
	

protected:
	QRectF boundingRect() const;
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private: 
	GraphicsWidget *graphicsWidget;
	int m_x0, m_y0, m_radius, width;
	bool circle;

};

#endif



