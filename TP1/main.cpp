// TP1_newblankproject.cpp
// 06/10/2017
// C++ Lab1
// Complet, à l'exception 
// de la méthode pour utiliser display overload dans game
// et des commentaires...

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