#ifndef MYPOINT_H
#define MYPOINT_H

#include "MyGraphicObject.h"

class MyPoint :
	public MyGraphicObject
{
public:
	MyPoint(const int& x, const int& y, const Color& color)
		: MyGraphicObject::MyGraphicObject(x, y, color) {};
	void draw() const;
};

#endif