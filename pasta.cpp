/* 
 * This file, pasta.cpp is the factory for pasta objects
 * Author: Lukas Friedrich
 * Aug 29, 2021
 *
 */

#include "pasta.h"


Pasta::Pasta(){
    setServings(MIN);
    setCalories(MIN);
    setGlutenFree(0);
}

Pasta::Pasta(int serv, int cal, int type, bool gf){
    setServings(serv);
    setCalories(cal);
    setNoodleType(type);
    setGlutenFree(gf);
}

//destructor not used
Pasta::~Pasta(){    
}

bool Pasta::getGlutenfree(){ 
    return this->isGlutenFree;
}

int Pasta::getNoodleType(){ 
    return this->noodleType;
}

int Pasta::getPerServing(){
    //override getPerServings of Food to factor in GF option
    float factor = .75;
    if (isGlutenFree == 0){
        factor = 1;
    }
    return (this->calories / this->servings) * factor;
}

//unique method of Pasta
int Pasta::calcNoodleCount(){

    //each noodle gets a different calorie count based on type and GF
    int noodleCal = 5;
    if (noodleType <= 1){
        noodleCal--;
    } else if (noodleType == 2){
        noodleCal++;
    } else if (noodleType >= 3){
        noodleCal = noodleCal+2;
    }
    if (isGlutenFree == 0){
        return calories / noodleCal;
    } else {
        return calories / (noodleCal*2);
    }
}

void Pasta::setGlutenFree(bool gf){
    if (gf == 0) {
        this->isGlutenFree = gf;
    } else {
        this->isGlutenFree = MIN;
    }
}

void Pasta::setNoodleType(int noodtype){
    this->noodleType = noodtype;
}