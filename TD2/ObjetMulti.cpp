#include "ObjetMulti.h"
#include <iostream>

using namespace std;


void ObjetMulti::display() const
{
	cout << "Cet objet multimedia s'appelle \"" << nom_ << "\" et se situe à " << chemin_ << endl;
}
