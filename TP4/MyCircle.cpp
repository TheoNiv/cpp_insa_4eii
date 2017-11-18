#include "MyCircle.h"

void MyCircle::draw() const
{
	Draw::circle(x_, y_, radius_, PEN_WIDTH, color_, fill_);
}
