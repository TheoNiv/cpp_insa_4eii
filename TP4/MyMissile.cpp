#include "MyMissile.h"
#include "MyCircle.h"

MyMissile::~MyMissile()
{
}


void MyMissile::explode()
{
	figures_.addObject(new MyCircle(bb_.p.x - 500, bb_.p.y - 500, 1000, true, Color::HotPink));
	figures_.addObject(new MyCircle(bb_.p.x - 200, bb_.p.y - 200, 400, true, Color::PaleVioletRed));
	figures_.addObject(new MyCircle(bb_.p.x - 75, bb_.p.y - 75, 150, true, Color::Chartreuse));
	figures_.addObject(new MyCircle(bb_.p.x - 30, bb_.p.y - 30, 60, true, Color::Chocolate));
	figures_.addObject(new MyCircle(bb_.p.x - 15, bb_.p.y - 15, 30, true, Color::DarkGoldenrod));
}
