/*
 * 	Name: Lukas Friedrich
 * 	Coding 02
 * 	Create basic food object for data collection
 */
 
#include "food.h"

Food::Food()
	{
	    setServings(MIN);
	    setCalories(MIN);
	}

Food::Food(int servings, int calories)
	{
	    setServings(servings);
	    setCalories(calories);
	}

Food::~Food()
	{
	}

int Food::getServings()
	{
	    return this->servings;
	}

int Food::getCalories()
	{
	    return this->calories;
	}

int Food::getPerServing()
	{
	    return this->calories / this->servings;
	}

void Food::setServings(int serv)
	{
	    if (serv > MIN)
	    	{
		    this->servings = serv;	
		} else
			{
			    this->servings = MIN;
			}
	}

void Food::setCalories(int cal)
	{
	    if (cal > MIN)
	    	{
		    this->calories = cal;
		} else
			{
			    this->calories = MIN;
			}
	}
