/*	
 *	Name: Lukas Friedrich
 *	Coding 02
 *	holds the print functions that display attributes and calculated values
 *
 */

#include "functions.h"

void displayFood (Food *myFood){

    std::cout << myFood->getServings() << std::endl;
    std::cout << myFood->getCalories() << std::endl;
    std::cout << myFood->getPerServing() << std::endl;
    std::cout << std::endl;
}


void displayPasta (Pasta *myPasta){

    std::cout << myPasta->getServings() << std::endl;
    std::cout << myPasta->getCalories() << std::endl;
    std::cout << myPasta->getGlutenfree() << std::endl;
    std::cout << myPasta->getPerServing() << std::endl;
    std::cout << myPasta->calcNoodleCount() << std::endl;
    std::cout << std::endl;
}
