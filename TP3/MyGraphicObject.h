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
	static MyGraphicObject* first_;
	MyGraphicObject* next_;

protected:
	Color color_;
	int x_;
	int y_;
	MyGraphicObject(const int& x, const int& y, const Color& color)
		: x_(x), y_(y), color_(color)
	{
		next_ = first_;
		first_ = this;
	}

public:
	virtual void draw() = 0; // Fonction abstraite, rend la classe abstraite
	inline static MyGraphicObject* getFirst();
	inline MyGraphicObject* getNext() const;
	void move(const int dx, const int dy);
	~MyGraphicObject();
};

inline MyGraphicObject * MyGraphicObject::getFirst() 
{
	return first_;
}

inline MyGraphicObject * MyGraphicObject::getNext() const
{
	return next_;
}

inline MyGraphicObject::~MyGraphicObject()
{
	MyGraphicObject** ptr = &first_; 
	while (*ptr != nullptr && *ptr != this) 
	{
		ptr = &((*ptr)->next_);
	}
	*ptr = ((*ptr)->next_);
}

#endif
