#include "guide.h"
#include "graphicswidget.h"

Guide::Guide ( GraphicsWidget *gw, int x0, int y0, int radius ) : graphicsWidget ( gw ){
	graphicsWidget->scene()->addItem ( this );
	m_x0=x0;
	m_y0=y0;
	m_radius=radius;
	setZValue ( 250 );
	circle=true;
}



Guide::Guide ( GraphicsWidget *gw,  int y0, int w) : graphicsWidget ( gw ){
	graphicsWidget->scene()->addItem ( this );
	m_y0=y0;
	width= w;
	setZValue ( 250 );
	circle=false;
}


/** Returns the bounding rectangle of the background circle*/
QRectF Guide::boundingRect() const {
    if (circle) {
     return QRectF ( m_x0 - m_radius-1, m_y0 - m_radius-1, m_x0 + 2 * m_radius + 1, m_y0 + 2* m_radius +1 );
	}
	else  {
     return QRectF ( 1, m_y0 -1,  width, m_y0 + 1 );
	}
}


void Guide::paint ( QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget * ){
	Q_UNUSED(option);
	painter->setPen ( QPen ( QColor ( "red" ), 1, Qt::DotLine ) );
	if (circle) {
        painter->drawEllipse ( QPoint(m_x0, m_y0), m_radius, m_radius );
	}
	else {
		painter->drawLine ( 10 , m_y0, width-10 , m_y0);	
	}
}



void Guide::die (){
	this->prepareGeometryChange();
	this->hide();
	this->update();
	graphicsWidget->scene()->removeItem(this);
	this->update();
}



