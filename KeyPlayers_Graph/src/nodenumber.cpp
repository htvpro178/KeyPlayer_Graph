#include "nodenumber.h"
#include "node.h"
#include <QFont>

NodeNumber::NodeNumber( Node *jim , int size, QString labelText) :QGraphicsTextItem(0) {
	source=jim;
	jim -> addNumber(this);
	setParentItem(jim); //auto disables child items like this, when node is disabled.
	setPlainText( labelText ); 
    setFont( QFont ("Times", size, QFont::Black, false) );
	setZValue(254);
}

void NodeNumber::removeRefs(){
	source->deleteNumber();

}

NodeNumber::~NodeNumber(){

}
