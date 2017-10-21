#include "Video.h"
#include <iostream>

using namespace std;

void Video::display() const
{
	cout << "Cette video s'appelle \"" << nom_ << "\" et se situe a " << chemin_ << endl;
}

void Video::play() const
{
	//show a video
}
