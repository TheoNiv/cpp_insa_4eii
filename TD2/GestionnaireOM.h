#pragma once

#include "ObjetMulti.h"
#include "Photo.h"
#include "Video.h"
#include "VideoST.h"

#include <list>
class GestionnaireOM
{
public:
	GestionnaireOM() {}; // Constructeur vide
	~GestionnaireOM(); // R�gle des 3... si membre == pointeur // Destructeur
	GestionnaireOM(const GestionnaireOM & g); // Constructeur par recopie
	GestionnaireOM & operator=(const GestionnaireOM & g); // Op�rateur d'aff�ctation
	
	template <typename OM>
	void Add(const OM& obj)
	{
		cout << "Type non support�" << endl;
	}

	void playObjetMulti(const string & nom);
	void displayObjetMulti(const string & nom);
	void suppressObjetMulti(const string &nom);

private:
	list<ObjetMulti*> data_; // Agr�gation

	void AddPhoto(const Photo& obj);
	void AddVideo(const Video& obj);
	void AddVideoST(const VideoST& obj);
};


template<>
void GestionnaireOM::Add<Video>(const Video & obj);
template<>
void GestionnaireOM::Add<VideoST>(const VideoST & obj);
template<>
void GestionnaireOM::Add<Photo>(const Photo & obj);