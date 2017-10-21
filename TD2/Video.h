#pragma once
#include "ObjetMulti.h"
class Video :
	public ObjetMulti
{
public:
	Video(const string &nom, const string &chemin) :ObjetMulti::ObjetMulti(nom, chemin) {};
	virtual void display() const;
	virtual void play() const;
};

