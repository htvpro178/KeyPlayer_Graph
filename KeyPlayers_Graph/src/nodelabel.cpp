#include "nodelabel.h"
#include "node.h"
#include <QFont>


NodeLabel::NodeLabel( Node *jim ,  int size,  QString labelText) :QGraphicsTextItem(0) {
	source=jim;
	jim -> addLabel(this);
	setParentItem(jim); //auto disables child items like this, when node is disabled.
	setPlainText( labelText );
    setFont( QFont ("Times", size, QFont::Light, true) );
	setZValue (253);
}

void NodeLabel::removeRefs(){
	source->deleteLabel();

}


NodeLabel::~NodeLabel(){
}
