#include "GestionnaireOM.h"
#include <iostream>
#include <typeinfo>

GestionnaireOM::~GestionnaireOM()
{
	for (auto & om : data_) // Pour tous les objets multi de la liste
		delete om; // delete
	data_.clear(); // remove and affect a zero size to the list
}

GestionnaireOM::GestionnaireOM(const GestionnaireOM & g)
{
	for (auto & om : g.data_)
	{
		if (typeid(*om).name() == typeid(VideoST).name())
			data_.push_back(new VideoST(om->getNom(), om->getChemin(), om->getChemin()));
		else if (typeid(*om).name() == typeid(Video).name())
			data_.push_back(new Video(om->getNom(), om->getChemin()));
		else if (typeid(*om).name() == typeid(Photo).name())
			data_.push_back(new Photo(om->getNom(), om->getChemin()));
	}
}

GestionnaireOM & GestionnaireOM::operator=(const GestionnaireOM & g) // om est un ObjetMulti * vers une Photo, Video etc
{
	for (auto & om : g.data_)
	{
		if (typeid(*om).name() == typeid(VideoST).name())
			data_.push_back(new VideoST(om->getNom(), om->getChemin(), om->getChemin()));
		else if (typeid(*om).name() == typeid(Video).name())
			data_.push_back(new Video(om->getNom(), om->getChemin()));
		else if (typeid(*om).name() == typeid(Photo).name())
			data_.push_back(new Photo(om->getNom(), om->getChemin()));
	}
	return *this;
}

void GestionnaireOM::AddPhoto(const Photo& obj)
{
	data_.push_back(new Photo(obj.getNom(), obj.getChemin()));
}

void GestionnaireOM::AddVideo(const Video& obj)
{
	data_.push_back(new Video(obj.getNom(), obj.getChemin()));
}

void GestionnaireOM::AddVideoST(const VideoST& obj)
{
	data_.push_back(new VideoST(obj.getNom(), obj.getChemin(), obj.getChemin_st()));
}

void GestionnaireOM::playObjetMulti(const string & nom)
{
	for (list<ObjetMulti*>::iterator it = data_.begin(); it != data_.end(); ++it)
		if (!((*it)->getNom().compare(nom)))
		{
			(*it)->play();
			break;
		}
}

void GestionnaireOM::displayObjetMulti(const string & nom)
{
	for (list<ObjetMulti*>::iterator it = data_.begin(); it != data_.end(); ++it)
		if (!((*it)->getNom().compare(nom)))
		{
			(*it)->display();
			break;
		}
}

void GestionnaireOM::suppressObjetMulti(const string & nom)
{
	for (list<ObjetMulti*>::iterator it = data_.begin(); it != data_.end(); ++it)
		if (!((*it)->getNom().compare(nom)))
		{
			delete *it;
			data_.erase(it);
			break;
		}
}

template<>
void GestionnaireOM::Add<Photo>(const Photo & obj)
{
	AddPhoto(obj);
}

template<>
void GestionnaireOM::Add<Video>(const Video & obj)
{
	AddVideo(obj);
}

template<>
void GestionnaireOM::Add<VideoST>(const VideoST & obj)
{
	AddVideoST(obj);
}