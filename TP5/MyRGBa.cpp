#include "MyRGBa.hpp"

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


// NB: bad arithmetic here (no clamp)
 MyRGBa MyRGBa::operator-(const MyRGBa &p) const {
	 MyRGBa p2;
	 p2.R_ = R_ - p.R_;
	 p2.G_ = G_ - p.G_;
	 p2.B_ = B_ - p.B_;
	 p2.A_ = A_ - p.A_;
	 return p2;
 }