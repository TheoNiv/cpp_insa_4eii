#pragma once
#include "MyImmobile.h"
#include "MyRectangle.h"

class MyFrame :
	public MyImmobile
{
public:
	MyFrame(const Position &p, const MySize &s, Color c = Color::Black) 
		: MyImmobile::MyImmobile(p, s, c) 
	{
		figures_.addObject(new MyRectangle(p.x, p.y, s.dx, s.dy, false, c));
	}
	~MyFrame();

	bool isHit(const BoundingBox & bb) const;
};