#include "MyRectangle.h"


void MyRectangle::draw() const
{
	Draw::rectangle(x_, y_, length_x_, length_y_, PEN_WIDTH, color_, fill_);
}

