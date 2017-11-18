#pragma once
#include "MyGraphicObject.h"
class MySegment :
	public MyGraphicObject
{
protected:
	int dx_;
	int dy_;

public:
	MySegment(const int& x, const int& y, const int& length_x, const int& length_y, const Color& color)
		: MyGraphicObject::MyGraphicObject(x, y, color), dx_(length_x), dy_(length_y) {};
	void draw() const;
};

