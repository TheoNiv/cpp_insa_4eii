#ifndef MYGRAPHICOBJECT_H
#define MYGRAPHICOBJECT_H

#include "MyGDIplus.hpp"

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

inline MyGraphicObject::~MyGraphicObject() // Voir la version du prof, sinon version perso
{
	MyGraphicObject** ptr = &first_;
	while (*ptr != nullptr && *ptr != this) ptr = &((*ptr)->next_);
	*ptr = ((*ptr)->next_);
	/*MyGraphicObject** tmp;
	for (tmp = &first_; (*tmp)->next_ != this; tmp = &((*tmp)->next_));
	(*tmp)->next_ = this;
	if (first_ == next_) first_ = next_;
	delete this;*/
}

#endif
