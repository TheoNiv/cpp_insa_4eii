#include "MyImage.hpp"

int main()
{
	/*MyImage<unsigned char> img_grey(10, 8); // Test fonction de position
	img_grey(0, 0) = 128;
	img_grey(0, 1) = 128;
	std::cout << (int)img_grey(0, 0) << ' ' << (int)img_grey(0, 2) << std::endl;*/
	/*MyImage<unsigned char> img_r(0, 0); // Lecture d'une image
	std::cout << img_r.size() << std::endl;
	img_r.read("test-bw.jpg");
	std::cout << img_r.size() << std::endl;*/
	/*MyImage<unsigned char> img_w(2, 2); // Ecriture d'une nouvelle image
	img_w(0, 0) = 128;
	img_w(0, 1) = 255;
	img_w(1, 0) = 128;
	img_w.write("test-bw.jpg");
	std::cout << img_w.size() << std::endl;*/
	/*MyImage<MyRGBa> img_r(0, 0); // Lecture d'une image couleur
	std::cout << img_r.size() << std::endl;
	img_r.read("test-color.jpg");
	std::cout << img_r.size() << std::endl;
	std::cout << img_r(0, 2) << std::endl;*/
	/*MyImage<MyRGBa> img_withdraw(0, 0);
	img_withdraw.read("mask.jpg");
	std::cout << img_withdraw(0, 0) << std::endl;
	img_withdraw = img_withdraw - MyRGBa(100, 100, 100, 0);
	std::cout << img_withdraw(0, 0) << std::endl;
	img_withdraw =  MyRGBa(128, 128, 128, 0);
	std::cout << img_withdraw(0, 0) << std::endl;*/

	/*MyImage<MyRGBa> img_test(0, 0);
	img_test.read("test-color.jpg");
	for (int i = 0; i <= img_test.size(); ++i) // Old School, a voir
	{
		if(img_test[i] > 128) img_test[i] = MyRGBa(255, 0, 0, 0);
		else img_test[i] = MyRGBa(0, 0, 255, 0);
	}

	img_test.write("test-colornew.jpg");*/

	// Gestion des exceptions

	return 0;
}