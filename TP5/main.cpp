
#include "MyImage.hpp"
#include "MyRGBa.hpp"

#include <iostream>

int main()
{
    MyImage<unsigned char> I;
    MyImage<MyRGBa> I2;

    I.read("test-nb.jpg");
    I.write("write-nb-uc.jpg");

    I2.read("test-color.jpg");
    I2.write("write-color-rgb.jpg");


    I2.read("mask.jpg");
    I2 = I2 - MyRGBa(100,100,100,0);

    //Add code to modify background and text as required
	const MyRGBa red(255, 0, 0, 0);
	const MyRGBa blue(0, 0, 255, 0);

	for (unsigned int k = 0; k < I2.size(); ++k) {
		if (I2[k]>128) I2[k] = red;
		else           I2[k] = blue;
	}
	I2.write("res_mask.jpg");

	std::cout << "Press enter" << std::endl;
	std::cin.ignore(1,'\n');
}
