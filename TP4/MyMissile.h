#pragma once
#include "MyMobile.h"
#include "MyCircle.h"

class MyMissile :
	public MyMobile
{
public:
	MyMissile(const Position &p, const MySize &s, Speed &sp, Color c = Color::Black)
		: MyMobile::MyMobile(p, s, sp, c) 
	{
		figures_.addObject(new MyCircle(p.x, p.y, s.dx, true, Color::RosyBrown));
	} //Ou second constructeur

	~MyMissile();
	void explode();
};