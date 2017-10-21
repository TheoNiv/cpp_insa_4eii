#include "VideoST.h"
#include <iostream>

using namespace std;

void VideoST::display() const
{
	Video::display();
	cout << "Les ST sont a " << chemin_st_ << endl;
}

void VideoST::play() const
{
	//show a video with sub
}
