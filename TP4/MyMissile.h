#pragma once
#include "MyMobile.h"
#include "MyRectangle.h"

class MyMissile :
	public MyMobile
{
public:
	MyMissile(const Position &p, const MySize &s, Speed &sp, Color c = Color::Black)
		: MyMobile::MyMobile(p, s, sp, c) 
	{
		figures_.addObject(new MyRectangle(p.x, p.y, s.dx, s.dy, true, c));
	} //Ou second constructeur

	~MyMissile();
};