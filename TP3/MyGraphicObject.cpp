#include "MyGraphicObject.h"

MyGraphicObject* MyGraphicObject::first_ = nullptr;

void MyGraphicObject::move(const int dx, const int dy)
{
	x_ += dx;
	y_ += dy;
}