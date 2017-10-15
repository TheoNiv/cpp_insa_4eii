#include "Game.h"

using namespace std; // namespace only in .cpp files

int myrandom(int i) { return std::rand() % i; }

Game::Game()
{
	// or with begin and end in the type enum
	for (int suit = 0; suit < 4; ++suit)
		for (int symbol = 0; symbol < 8; ++symbol)
			draw_pile_.push_back(Card(static_cast<Card::Suits>(suit), static_cast<Card::Symbols>(symbol)));
}

void Game::display()
{
	for (unsigned int i = 0; i < discard_pile_.size(); ++i)
		cout << discard_pile_[i] << endl; // display draw or discard ? whatever it doesnt matter
}

const Pile & Game::drawPile()
{
	return draw_pile_;
}

bool Game::extractCard(unsigned int card_number)
{
	if (card_number < draw_pile_.size())
	{
		discard_pile_.push_back(draw_pile_[card_number]);
		draw_pile_.erase(draw_pile_.begin()+card_number);
		return true;
	}
	else return false;
}

void Game::putInDrawPile()
{
	for (unsigned int i = 0; i < discard_pile_.size(); ++i)
		draw_pile_.push_back(discard_pile_[i]);
	discard_pile_.clear();
}

const bool Game::init() {

	if (!init_seed_)
		std::srand(unsigned(std::time(0)));

	return true;
}
void Game::shuffle()
{
	random_shuffle(draw_pile_.begin(), draw_pile_.end(), myrandom);
}
