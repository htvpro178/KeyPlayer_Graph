#ifndef EDGEWEIGHT_H
#define EDGEWEIGHT_H


#include <QGraphicsTextItem>
class Edge;

static const int TypeEdgeWeight = QGraphicsItem::UserType+5;

class EdgeWeight: public QGraphicsTextItem
{
public:
    EdgeWeight(Edge * , int, QString);
	void removeRefs();
	void move(double x, double y);

	enum { Type = UserType + 5 };
	int type() const { return Type; }

	~EdgeWeight();
private:
};

#endif
