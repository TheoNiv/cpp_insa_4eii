#include "MyString.h"

MyString::MyString()
{
	mystring_ = new char;
	mystring_[0] = '\0';
	LOGME("Constructeur par defaut");
}

MyString::MyString(const char * s)
{
	mystring_ = new char[strlen(s)+1]; // +1 pour le '\0' (fin de chaine) strlen ne le retourne pas mais dans tous les cas char* ne contient pas le char de fin de chaine
	strcpy_s(mystring_, strlen(s)+1, s);
	mystring_[strlen(mystring_)] = '\0';
	LOGME("Constructeur char*");
}

MyString::MyString(const MyString & c)
{
	mystring_ = new char[strlen(c.mystring_)+1];
	strcpy_s(mystring_, strlen(c.mystring_)+1,c.mystring_);
	LOGME("Constructeur String");
}


MyString::~MyString()
{
	delete [] mystring_; // pointeur donc destructeur, opérateur d'affec et constructeur par recopie
	LOGME("Destructeur");
}

MyString & MyString::toUpper()
{
	for (int i = 0; i <= strlen(mystring_); ++i)
		if (mystring_[i] >= 97 && mystring_[i] <= 122) mystring_[i] = mystring_[i] - 32; // passer par des variables globales pour ce genre d'op
	return *this;
}

MyString & MyString::operator=(const MyString & s)
{
	char * temp = new char[strlen(s.mystring_) + 1];
	strcpy_s(temp, strlen(s.mystring_) + 1, s.mystring_);

	delete [] mystring_;
	mystring_ = new char[strlen(temp) + 1];
	strcpy_s(mystring_, strlen(temp)+1, temp);
	LOGME("Operateur =");
	return *this;
}

char & MyString::operator[](int index)
{
	LOGME("Operateur []");
	if (index > strlen(mystring_)) throw exception("index en dehors des limites"); // catch les exceptions quand on utilise cette fonction
	return mystring_[index];
}

const char MyString::operator[](int index) const
{
	if (index > strlen(mystring_)) throw exception("index en dehors des limites");
	return mystring_[index];
}

bool MyString::operator==(const MyString & s)
{
	return !strcmp(mystring_, s.mystring_);
}

bool MyString::operator<(const MyString & s)
{
	return strlen(mystring_) < strlen(s.mystring_);
}

bool MyString::operator>(const MyString & s)
{
	return strlen(mystring_) > strlen(s.mystring_);
}

bool MyString::operator<=(const MyString & s)
{
	return strlen(mystring_) <= strlen(s.mystring_);
}

bool MyString::operator>=(const MyString & s)
{
	return strlen(mystring_) >= strlen(s.mystring_);
}

std::ostream & operator<<(std::ostream & os, const MyString & s)
{
	os << s.mystring_;
	LOGME("Operateur <<");
	return os;
}

MyString operator+(const MyString & s1, const MyString & s2)
{
	MyString res = new char[strlen(s1.getString()) + strlen(s2.getString()) + 1];
	strncpy_s(res.getString(), strlen(s1.getString())+1, s1.getString(), strlen(s1.getString()));
	strcat_s(res.getString(), strlen(s1.getString()) + strlen(s2.getString()) + 1, s2.getString());
	return res;
}

MyString MyString::subString(char begin, char end)
{
	int begin_i, end_i, i = 0;
	while (mystring_[i++] != begin);
	begin_i = i-1;
	while (mystring_[i++] != end);
	end_i = i-1;
	return subString(begin_i, end_i-begin_i+1);
}

MyString MyString::subString(int begin, int s)
{
	char * str_res = new char[s];
	strncpy_s(str_res, strlen(getString())+1, mystring_+begin, s);
	MyString res(str_res);
	return res;
}
