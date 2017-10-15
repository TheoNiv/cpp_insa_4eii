#include "Card.h"

using namespace std;

namespace // namespace anon => static (unique au fichier)
{
	const std::string suits_names[] = { " Clubs ", " Diamonds ", " Hearts ", " Spades " };
	const std::string symbols_names[] = { "Ace", " King ", " Queen ", " Jack ", "Ten", " Nine ", " Eight ", " Seven " };
}

Card::Card(Card::Suits suit, Card::Symbols symbol) : suit_(suit), symbol_(symbol) {}

void Card::display() const // currently working only with an object Card and not an object Game ?...
{
		std::cout << this << endl;
}

bool Card::equalsSuit(const Card& card) const
{
	if (getSuit() == card.getSuit()) return true;
	else return false;
}

bool Card::equalsSymbol(const Card& card) const
{
	if (getSymbol() == card.getSymbol()) return true;
	else return false;
}

Card& Card::operator=(const Card & card)
{
	static int nbtrace = 0;
	//cout << nbtrace << endl; // show trace
	++nbtrace;
	//or use memcpy
	suit_ = card.getSuit();
	symbol_ = card.getSymbol();
	return *this;
}

ostream & operator<<(ostream & os, const Card & card)
{
	os << suits_names[card.suit_] << " " << symbols_names[card.getSymbol()];
	return os;
}