#include "game.hpp"
//Uncomment line by line as you implement and test your classes
#include "MyFrame.h"
#include "MyMissile.h"
#include "MyRocket.h"
#include <ctime>        // std::time

namespace random_nb
{
	int myrandom(int i) { return std::rand() % i; }
}

//Uncomment step by step
Game::Game() :frame_(0),rocket_(0),missile_(0),game_over_(0) { }


Game::~Game() {
	//Uncomment step by step
	delete frame_;
	delete rocket_;
	delete missile_;
}


/*!
* \fn void initializeScene()
* \brief initializae all ojects in the game
*/
void Game::initialize()
{
	if (frame_) return; // guard
	//Uncomment step by step
	std::srand(unsigned(std::time(0)));
	frame_   = new MyFrame(Position(10, 10), MySize(1000, 500), Color::Violet);
	missile_ = new MyMissile(Position(1 + random_nb::myrandom(400), 1 + random_nb::myrandom(200)), 15, Speed(2+random_nb::myrandom(10), 2+random_nb::myrandom(15)), Color::Orange);
	rocket_  = new MyRocket(Position(1 + random_nb::myrandom(400), 1 + random_nb::myrandom(200)), MySize(100, 20), Speed(2 + random_nb::myrandom(5), 2 + random_nb::myrandom(5)), Color::MediumPurple);
}

/*!
* \fn void step()
* \brief Move all objects left or right
*/
void Game::step() {
	
	//Uncomment step by step
	if (!frame_) return; // guard
	if (!game_over_)
	{
		missile_->step();
		rocket_->step();
		if (frame_->isHit(rocket_->getBoundingBox())) rocket_->changeDirection();
		if (frame_->isHit(missile_->getBoundingBox())) missile_->changeDirection();
		if (rocket_->isHit(missile_->getBoundingBox()))
		{
			missile_->explode(); 
			game_over_ = 1;
		}
	}
}


/*!
* \fn void draw()
* \brief Draw all objects
*/
void Game::draw() {
	if (!frame_) return; // guard
	//Uncomment step by step
	frame_->draw();
	rocket_->draw();
	missile_->draw();
}


