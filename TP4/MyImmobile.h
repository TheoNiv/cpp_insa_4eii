#pragma once
#include "MyGameElement.hpp"

class MyImmobile :
	public MyGameElement
{
protected:
	MyImmobile(const Position &p, const MySize &s, Color c = Color::Black) 
		: MyGameElement::MyGameElement(p, s, c) {}
	~MyImmobile();
};