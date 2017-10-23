#include "MyPoint.h"

void MyPoint::draw()
{
	Draw::point(x_, y_, PEN_WIDTH, color_);
}
