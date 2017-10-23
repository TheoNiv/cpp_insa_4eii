#pragma once
#include "MyGraphicObject.h"
class MyRectangle :
	public MyGraphicObject
{
protected:
	bool fill_;
	int length_x_;
	int length_y_;

public:
	MyRectangle(const int& x, const int& y, const int& length_x, const int& length_y, const bool& fill, const Color& color)
		: MyGraphicObject::MyGraphicObject(x, y, color), length_x_(length_x), length_y_(length_y), fill_(fill) {};
	virtual void draw();

};

