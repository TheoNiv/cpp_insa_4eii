#pragma once
#include "MyGraphicObjectManager.hpp"
#include "MyGDIPlus.hpp"

class MyGraphicObjectManager;

// replace int by strong typing for safer API
struct Position { 
	Position(int xx, int yy) :x(xx), y(yy) {};
	int x, y;
};

struct MySize { 
	MySize(int dxx, int dyy = 10) :dx(dxx), dy(dyy) {} // Initialisation ou second constructeur...
	int dx, dy;
};

struct BoundingBox { 
	//BoundingBox(Position pp, MySize ss) : p(pp), s(ss) {}; // Solution {} ou par constructeur
	Position p; 
	MySize s; 
};

struct Speed {
	Speed(int xx, int yy) :x(xx), y(yy) {};
	int x, y;
};


class MyGameElement{
public:	
	//virtual ~MyGameElement(); // should always be virtual in case child have attributes


	void draw() const;
	virtual bool isHit(const BoundingBox &bb) const; // default is to intersect boundingboxes
	const BoundingBox &getBoundingBox() const { return bb_; }
protected :
	explicit MyGameElement(const Position &p, const MySize &s, Color c = Color::Black) 
		: bb_({ p, s }), color_(c) {}
	// not intentiable, should be private

	BoundingBox bb_; 
	Color color_;	
	MyGraphicObjectManager figures_; 
};
