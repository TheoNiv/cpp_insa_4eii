#pragma once
#include "MyGameElement.hpp"


class MyMobile :
	public MyGameElement
{

protected :
	Speed sp_;
	explicit MyMobile(const Position &p, const MySize &s, Speed &sp, Color c = Color::Black)
		: MyGameElement::MyGameElement(p, s, c), sp_(sp) {}

public:
	void changeDirection();
	void step();

	~MyMobile();
};