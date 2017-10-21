#pragma once
#include "ObjetMulti.h"
class Photo :
	public ObjetMulti
{
public:
	Photo(const string &nom, const string &chemin) :ObjetMulti::ObjetMulti(nom, chemin) {};
	virtual void display() const;
	virtual void play() const;
};

