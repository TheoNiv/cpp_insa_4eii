// TD1
// 21/10/2017
// C++ TD1
// 

#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	// Question 1
	// 1 - Quelles instructions a-t-on le droit de faire juste après cette déclaration de pointeur
	//int * p = NULL; // Déclare un pointeur vide vers un entier 

	//p = new int; // Right - Call the new operator to allocate memory, then the by default int constructor, return a int*
	//*p = 4; // False - Affecte la valeur 4 à l'adresse pointée par p, or p ne pointe vers rien
	//p = new int; *p = 4; // Right - Affecte une adresse puis une valeur à cette adresse
	//p = new int(4); // Right - Call the int constructor with one parameters in order to affect a value
	//p = new int[4]; // Right - Return the first adresse of a int array of length 4, create 4 int object with the default constructor
	//delete p; // Right - ne delete rien car il n'y a rien dans le tas, pas d'utilisation de déclaration dynamique
	//delete []p; // Right - same here

	// 2 - Quelles instructions a-t-on le droit de faire juste après cette déclaration de pointeur
	//const int * p = NULL; // Déclare un pointeur vide dont la valeur est constante

	//p = new int; // Right - Modification de l'adresse autorisée
	//*p = 4; // False - le pointeur n'a pas d'adresse
	//p = new int; *p = 4; // False - la mémoire est bien allouée mais on ne peut pas modifier la valeur
	//p = new int(4); // Right - On place une valeur à une adresse que l'on attribue à p
	//p = new int[4]; // Right - L'allocation est correct mais on ne pourra pas changer les valeurs via p
	//delete p; // Right - Same reason as above
	//delete[]p; // //

	// 3 - Quelles instructions a-t-on le droit de faire juste après cette déclaration de pointeur
	//int * const p = NULL; // const à droite de l'étoile => le pointeur est constant

	//Tous les cas sont faux, nous avons un pointeur constant vers rien
	//sauf les delete mais il ne servent à rien...
	//delete p;
	//delete []p;

	// 4 - Quelles instructions a-t-on le droit de faire juste après cette déclaration de pointeur
	//int ** p = NULL;

	//p = new int*; *p = new int[4]; // Right - p pointe vers un pointeur vers l'adresse d'un tableau
	//*p = new int(4); // False - p pointe vers rien et *p pointe vers l'adresse d'un entier (mais inaccessible)
	//p = new int*; *p = new int(4); // Right - cas 1 avec une variable
	//p = new int[4]; // False - pointeur vers un tableau d'entier alors que *p est une pointeur d'entier
	//p = new int*[4]; // Right - voir cas precedent
	//delete p; // Right - ne delete rien
	//delete[]p; 

	// Question 2
	//int val = 5; // si @000000857BAFF584->5
	//int * pt = &val; // pt = @654->5
	//*pt = 1; // pt = @000000857BAFF584->1
	//pt++; // pt = @000000857BAFF588->Unknown
	//cout << val << " " << *pt << endl;//	1 -858993460
	//cout << &val << " " << pt << endl;//	000000857BAFF584 000000857BAFF588

	int val = 5; // @ ->5
	int &ref = val; // @ ->5
	ref = 1; // @ ->1
	ref++;
	cout << val << " " << ref << endl;
	cout << &val << " " << &ref << endl;

	return 0;
}