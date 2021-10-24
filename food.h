/*	
 *	Name: Lukas Friedrich
 *	Coding 02
 *	prototypes for food.cpp
 *
 */

#ifndef CLASSES_FOOD_H
#define CLASSES_FOOD_H

#define MIN 1

class Food
	{
	    public:
	    //constructors
	    Food();
	    Food(int, int);
	    //destructor
	    ~Food();

	    //getters
	    int getServings();
	    int getCalories();
	    int getPerServing();

	    //setters
	    void setServings(int);
	    void setCalories(int);

	    protected:
	    	//private food attributes
		int servings, calories;

	};


#endif // CLASSES_FOOD_H
