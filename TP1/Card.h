#ifndef CARD_H
#define CARD_H

#include <tchar.h>
#include <iostream>
#include <string>
#include <vector>

class Card
{
public:
	enum Suits { clubs, diamonds, hearts, spades };
	enum Symbols { ace, king, queen, jack, ten, nine, eight, seven };

private: // private by default
	Suits suit_;
	Symbols symbol_;

public:
	explicit Card(Card::Suits suit, Card::Symbols symbol); // No implicit conversion
	inline Suits getSuit() const;
	inline Symbols getSymbol() const;
	void display() const;
	bool equalsSuit(const Card& card) const;
	bool equalsSymbol(const Card& card) const;
	Card& operator=(const Card& card);
	friend std::ostream& operator<<(std::ostream& os, const Card& card); // accès membres privés
};

//std::ostream& operator<<(std::ostream& os, const Card& card);

inline Card::Suits Card::getSuit() const
{
	return suit_;
}

inline Card::Symbols Card::getSymbol() const
{
	return symbol_;
}

#endif