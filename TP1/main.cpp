// TP1.cpp
// 06/10/2017
// C++ Lab1
// without << overload for a game

#include "Card.h"
#include "Game.h"

using namespace std;

int main()
{
	Game game = Game();
	game.shuffle();
	game.extractCard(1);
	game.display();
	game.putInDrawPile();
	game.extractCard(1);
	game.display();
    return 0;
}