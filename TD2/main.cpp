// TD2
// 21/10/2017
// C++ TD2
// 

#include <stdlib.h>
#include <iostream>
#include "GestionnaireOM.h"

template<class T>
void swap(T& v1, T& v2)
{
	T tmp = v2;
	v2 = v1;
	v1 = tmp;
}

int main()
{
	/*Test d'une fonction template*/
	/*double i = 2, j = 1;
	swap<double>(i, j);
	std::cout << "i = " << i << " j = " << j;*/

	/* Faire des tests pour le gestionnaire multi*/
	//GestionnaireOM g;
	//g.Add<Photo>(Photo("testphoto", "testcheminchphoto"));
	//g.Add<VideoST>(VideoST("testvideoST", "testcheminchphoto", "cheminst"));
	//GestionnaireOM g2;
	//g2 = g;
	//g.suppressObjetMulti("testvideoST");
	//g2.displayObjetMulti("testphoto");
	//g2.displayObjetMulti("testvideoST");

	return 0;
}