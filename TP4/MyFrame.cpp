#include "MyFrame.h"

MyFrame::~MyFrame()
{
}

bool MyFrame::isHit(const BoundingBox & bb) const //frame arg implicite
{
	BoundingBox bbFrame = getBoundingBox();

	if ((bb.p.x+bb.s.dx > bbFrame.p.x+bbFrame.s.dx)
		|| (bb.p.x < bbFrame.p.x)
		|| (bb.p.y+bb.s.dy > bbFrame.p.y+bbFrame.s.dy)
		|| (bb.p.y < bbFrame.p.y))
			return true;
	return false;
}
