/* 
 * This file, pasta.h, contains all directives for pasta.cpp
 * Nutrition labels are so convienent *sigh*
 * Author: Lukas Friedrich
 * Aug 29, 2021
 *
 */

#ifndef CLASSES_PASTA_H
#define CLASSES_PASTA_H

#include "food.h"
#define MIN 1

class Pasta : public Food {
public:
        Pasta();
        Pasta(int,int, int, bool);
        ~Pasta();

        // getters
        int getPerServing();
        bool getGlutenfree();
        int getNoodleType();
        int calcNoodleCount();

        //setters
        void setGlutenFree(bool);
        void setNoodleType(int);

private:
        bool isGlutenFree;
        int noodleType;
};

#endif // CLASSES_PASTA_H
