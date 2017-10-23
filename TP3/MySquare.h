#pragma once
#include "MyRectangle.h"
class MySquare :
	public MyRectangle
{
protected:
	int dx_;
	int dy_;

public:
	MySquare(const int& x, const int& y, const int& length, const bool& fill, const Color& color)
		: MyRectangle::MyRectangle(x, y, length, length, fill, color) {};
};

