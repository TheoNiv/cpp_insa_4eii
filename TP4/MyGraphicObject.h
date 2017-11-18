#ifndef MYGRAPHICOBJECT_H
#define MYGRAPHICOBJECT_H

#include "MyGDIplus.hpp"
#define  _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#define PEN_WIDTH 10

class MyGraphicObject
{
private:

protected:
	Color color_;
	int x_;
	int y_;
	MyGraphicObject(const int& x, const int& y, const Color& color)
		: x_(x), y_(y), color_(color)
	{}

public:
	virtual void draw() const = 0; // Fonction abstraite, rend la classe abstraite
	void move(const int dx, const int dy);
	virtual ~MyGraphicObject() {};
};

#endif
