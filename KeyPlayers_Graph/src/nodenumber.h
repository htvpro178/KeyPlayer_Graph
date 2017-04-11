#ifndef NODENUMBER_H
#define NODENUMBER_H

#include <QGraphicsTextItem>

class Node;


static const int TypeNumber=QGraphicsItem::UserType+3;


class NodeNumber : public QGraphicsTextItem {
public:
    NodeNumber(Node * , int, QString);
	void removeRefs();
	enum { Type = UserType + 3 };
	int type() const { return Type; }
	Node* node() { return source; }
	~NodeNumber();
private:
	Node *source;
};

#endif
