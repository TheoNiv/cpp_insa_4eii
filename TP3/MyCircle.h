#pragma once
#include "MyGraphicObject.h"
class MyCircle :
	public MyGraphicObject
{
protected:
	bool fill_;
	int radius_;

public:
	MyCircle(const int& x, const int& y, const int& radius, const bool& fill, const Color& color)
		: MyGraphicObject::MyGraphicObject(x, y, color), radius_(radius), fill_(fill) {};
	virtual void draw();
};

