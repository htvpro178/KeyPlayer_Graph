#ifndef NODELABEL_H
#define NODELABEL_H

#include <QGraphicsTextItem>
class Node;

static const int TypeLabel = QGraphicsItem::UserType+4;

class NodeLabel : public QGraphicsTextItem{
public: 
    NodeLabel(Node * , int size,  QString);
	
	void removeRefs();
 	enum { Type = UserType + 4 };
	int type() const { return Type; }
	~NodeLabel();
	Node* node() { return source; }
private:
	Node *source;	
};

#endif
