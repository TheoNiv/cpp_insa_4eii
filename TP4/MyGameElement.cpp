#include "MyGameElement.hpp"
#include "MyGraphicObject.h"

void MyGameElement::draw() const
{
	for (int i = 0; i < figures_.size(); ++i)
		figures_[i].draw();
}
//Solution non fonctionnelle si le paramètre implicite est la frame
bool MyGameElement::isHit(const BoundingBox & bb) const
{
	BoundingBox bbA = getBoundingBox();
	
	if ((bbA.p.x < bb.p.x + bb.s.dx)
		&& (bbA.p.x + bbA.s.dx > bb.p.x)
		&& (bbA.p.y < bb.p.y + bb.s.dy)
		&& (bbA.p.y+bbA.s.dy > bb.p.y))
		return true;
	return false;
}
