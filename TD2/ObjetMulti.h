#pragma once

#include <vector>
#include <string>

using namespace std;

class ObjetMulti
{
public:
	ObjetMulti(const string &nom, const string &chemin) :nom_(nom), chemin_(chemin) {};
	inline string getNom() const
	{
		return nom_;
	}
	inline string getChemin() const
	{
		return chemin_;
	}
	inline void setNom(const string & nom)
	{
		nom_ = nom;
	}
	inline void setChemin(const string & chemin)
	{
		chemin_ = chemin;
	}
	virtual void display() const;
	virtual void play() const = 0;

protected: // give access to children
	string nom_;
	string chemin_;

};

