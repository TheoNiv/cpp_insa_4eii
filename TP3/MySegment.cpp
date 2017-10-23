#include "MySegment.h"

void MySegment::draw()
{
	Draw::line(x_, y_, x_ + dx_, y_ + dy_, PEN_WIDTH, color_);

}
