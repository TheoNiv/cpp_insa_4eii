
#ifndef MYRGBA_H
#define MYRGBA_H

class MyRGBa
{
public:
	MyRGBa() : R_(0), G_(0), B_(0), A_(0) {}
	MyRGBa(const unsigned char r, const unsigned char g, const unsigned char b, const unsigned char a = 0) : R_(r), G_(g), B_(b), A_(a) {}
	MyRGBa(const unsigned char v) : R_(v), G_(v), B_(v), A_(0) {}
	MyRGBa(const MyRGBa &v) : R_(v.R_), G_(v.G_), B_(v.B_), A_(v.A_) {}

	bool operator<(const MyRGBa &v) const;
	bool operator>(const MyRGBa &v) const;

	unsigned char getR() const { return R_; }
	unsigned char getG() const { return G_; }
	unsigned char getB() const { return B_; }
	unsigned char getA() const { return A_; }

	unsigned char getGreyValue() const { return (unsigned char)(R_*0.299 + G_*0.587 + B_*0.114); }

	// operator
	MyRGBa operator-(const MyRGBa &p) const;
private:
	unsigned char R_;
	unsigned char G_;
	unsigned char B_;
	unsigned char A_;
};

#endif


