/*
 * 	Name: Lukas Friedrich
 * 	Coding 02
 * 	Console application to demonstrate classes and objects in C++
 *	
 */

#include "main.h"

int main(int argc, char** argv)
	{

	//create a food object(s)
	Food food1;
	Food food2(5,1500);
	
	//create a pasta object(s)
	Pasta pasta1;
	Pasta pasta2(5,1500,2,true);


	displayFood(&food1);
	displayFood(&food2);

	displayPasta(&pasta1);
	displayPasta(&pasta2);

	return 0;
	}
