#include "MyMobile.h"
#include "MyGraphicObject.h"
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <random>

namespace random_nb
{
	int myrandom(int i) { return std::rand() % i; }
}

void MyMobile::changeDirection()
{
	sp_.x = (sp_.x < 0)? random_nb::myrandom((2 * sp_.x == 0) ? 10 : 2 * sp_.x) : -random_nb::myrandom((2*sp_.x == 0)? 10:2*sp_.x);
	sp_.y = (sp_.y < 0)? random_nb::myrandom((2 * sp_.y == 0) ? 10 : 2 * sp_.y) : -random_nb::myrandom((2*sp_.y == 0)? 10:2*sp_.y);
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
