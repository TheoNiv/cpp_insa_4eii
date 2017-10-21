#pragma once
#include "Video.h"
class VideoST :
	public Video
{
public:
	VideoST(const string &nom, const string &chemin, const string &chemin_st) : Video(nom, chemin), chemin_st_(chemin_st) {};
	inline string getChemin_st() const
	{
		return chemin_st_;
	}
	inline void setChemin_st(const string & chemin_st)
	{
		chemin_st_ = chemin_st;
	}
	virtual void display() const;
	virtual void play() const;

private: // No need further access
	string chemin_st_;
};

