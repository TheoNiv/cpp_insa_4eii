#ifndef GAME_H
#define GAME_H

#include "Card.h"
#include <algorithm>    // std::random_shuffle
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <random>

typedef std::vector<Card> Pile;

class Game
{
private:
	Pile discard_pile_;
	Pile draw_pile_;
	const bool init_seed_ = init(); // Smart Stan

public:
	Game();
	const bool init();
	void display();
	const Pile& drawPile();
	bool extractCard(unsigned int card_number);
	void putInDrawPile();
	void shuffle();
};

#endif