#include "MyMobile.h"
#include "MyGraphicObject.h"
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <random>

#define VMAX 5

void MyMobile::changeDirection()
{
	int spx = sp_.x;
	sp_.x = -sp_.y;
	sp_.y = spx;
}

void MyMobile::step()
{
	bb_.p.x += sp_.x;
	bb_.p.y += sp_.y;
	for (int i = 0; i < figures_.size(); ++i)
		figures_[i].move(sp_.x, sp_.y);
}

MyMobile::~MyMobile()
{
}
