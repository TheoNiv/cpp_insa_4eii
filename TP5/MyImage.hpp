#pragma once

#include <vector>
#include <iostream>
#include <exception>

#include"MyImageIO.hpp"
#include "MyRGBa.hpp" // to use MyRGBa type

template<typename Pixel> class MyImage
{
public:

    typedef std::vector<Pixel> data; //enable to change container easily (to test quickly which one is the most efficient for example)

	explicit MyImage(unsigned int height = 0, unsigned int width = 0)
	{
		height_ = height;
		width_ = width;
		bitmap_.resize(height_*width_);
	}
	// the explicit keyword prevents an implicit conversion
    //rule of 3 : no copy ctor, no copy assigment, no dtor


	void resize(unsigned int height, unsigned int width)
	{
		height_ = height;
		width_ = width;
		bitmap_.resize(height_*width_);
	}

public:
    //accessors
     unsigned int size() const { return bitmap_.size(); }
     unsigned int getHeight() const {return height_;}
     unsigned int getWidth() const {return width_;}


     // linear accessors (always by pair)
	 Pixel& operator[](const int i)
	 {
		 return bitmap_[i];
	 }
	 const Pixel& operator[](const int i) const
	 {
		 return bitmap_[i];
	 }

     // image accessors (always by pair)
     //Access to the pixel at the ithe line and jth column (as a 2D matrix)
	 Pixel& operator()(const int i, const int j)
	 {
		 return bitmap_[i*getWidth() + j];
	 }
	 const Pixel& operator()(const int i, const int j) const
	 {
		 return bitmap_[i*getWidth() + j];
	 }

	 MyImage<Pixel>& operator=(const Pixel &val)
	 {
		 for (iterator i = bitmap_.begin(); i != bitmap_.end(); ++i)
			 *i = val; // Pas certain de la méthode
		 return *this;
	 }

	 MyImage<Pixel>& operator-(const Pixel &val)
	 {
		 for (iterator i = bitmap_.begin(); i != bitmap_.end(); ++i)
			 *i = *i - val; // Pas certain de la méthode
		 return *this;
	 }

     //I/O
	 void read(const std::string &filename)
	 {
		 MyImageIO::readJPEG(*this, filename); // Passage par reference *this (this <=> pointeur <=> Passage par @
	 }
	 void write(const std::string &filename) const
	 {
		 MyImageIO::writeJPEG(*this, filename);
	 }


     // classical interface to benefit from all STL algorithm (transform, copy, etc.)
     typedef Pixel value_type;
     typedef typename data::iterator iterator;
     typedef typename data::const_iterator const_iterator;

     iterator begin() { return bitmap_.begin(); }
     const_iterator begin() const { return bitmap_.cbegin(); }
     iterator end() { return bitmap_.end(); }
     const_iterator end() const { return bitmap_.cend(); }


private:
    data bitmap_;
    unsigned int height_;
    unsigned int width_;

};



//#include"MyImage.inl"
