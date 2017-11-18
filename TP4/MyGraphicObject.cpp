#include "MyGraphicObject.h"

void MyGraphicObject::move(const int dx, const int dy)
{
	x_ += dx;
	y_ += dy;
}