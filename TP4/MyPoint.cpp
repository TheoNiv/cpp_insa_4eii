#include "MyPoint.h"

void MyPoint::draw() const
{
	Draw::point(x_, y_, PEN_WIDTH, color_);
}
