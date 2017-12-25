#include "MyRGBa.hpp"

bool MyRGBa::operator==(const MyRGBa &v) const
{
    return (R_ == v.R_) && (G_ == v.G_) && (B_ == v.B_) && (A_ == v.A_) ;
}

bool MyRGBa::operator!=(const MyRGBa &v) const
{
    return (R_ != v.R_) || (G_ != v.G_) || (B_ != v.B_) || (A_ != v.A_) ;
}

 MyRGBa MyRGBa::operator-(const MyRGBa &v) const
{
  MyRGBa n( R_ - v.R_,
            G_ - v.G_,
            B_ - v.B_,
            A_ - v.A_);
  return n;
}
 
 MyRGBa MyRGBa::operator+(const MyRGBa &v) const
{
     MyRGBa n( R_ + v.R_,
               G_ + v.G_,
               B_ + v.B_,
               A_ + v.A_);
     return n;
}


bool MyRGBa::operator<(const MyRGBa &v) const
{
  double gray1 = this->getGreyValue();
  double gray2 = v.getGreyValue();
 
  return (gray1 < gray2);
}
 
 bool MyRGBa::operator>(const MyRGBa &v) const
{
     double gray1 = this->getGreyValue();
     double gray2 = v.getGreyValue();
 
  return (gray1 > gray2);
}

 std::ostream & operator<<(std::ostream & os, const MyRGBa & v)
 {
	 os << "R=" << (int)v.getR() << " G=" << (int)v.getG() << " B=" << (int)v.getB() << " a=" << (int)v.getA() << std::endl;
	 return os;
 }
