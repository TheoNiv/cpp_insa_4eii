#ifndef MYSTRING_H
#define MYSTRING_H

#include <stdlib.h>
#include <cstring>
#include <iostream>

#if 0
#define LOGME(x) std::cout << x <<std::endl ;
#else
#define LOGME(x)
#endif

using namespace std;

class MyString
{
private:
	char * mystring_;

public:
	MyString(); // constructeur par defaut
	MyString(const char * s);
	MyString(const MyString &c); // constructeur par recopie

	~MyString();

	inline char * getString() const; // getter setter en inline

	MyString subString(char begin, char end);
	MyString subString(int begin, int s);

	MyString& toUpper();
	MyString& operator=(const MyString& s);
	char& operator[](int index);
	const char operator[](int index) const; // déclarer la version const et non const de cet opérateur
	bool operator==(const MyString &s); // Pourquoi plus efficace que friend ?
	bool operator<(const MyString &s);
	bool operator>(const MyString &s);
	bool operator<=(const MyString &s);
	bool operator>=(const MyString &s);
	friend std::ostream& operator<<(std::ostream& os, const MyString& s);
};

MyString operator+(const MyString &s1, const MyString &s2);

inline char * MyString::getString() const
{
	return mystring_;
}

#endif
