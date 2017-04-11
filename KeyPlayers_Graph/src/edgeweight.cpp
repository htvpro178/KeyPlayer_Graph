#include "edgeweight.h"
#include "edge.h"
#include <QDebug>
#include <QFont>


EdgeWeight::EdgeWeight( Edge *link , int size, QString labelText)
: QGraphicsTextItem( 0)
{
    qDebug()<< "EdgeWeight:: creating new edgeweight and attaching it to link";
	link -> addWeight(this);
	setPlainText( labelText );
    setParentItem(link); //auto disables child items like this, when link is disabled.
    this->setFont( QFont ("Courier", size, QFont::Light, true) );
    setZValue(253);
}

void EdgeWeight::move(double x, double y) {
	this -> move(x,y);
}

EdgeWeight::~EdgeWeight()
{
}


