#include "h_LandAnimalMultipleInheEx.hpp"
#include <iostream>

void landAnimal::run(){
	std::cout <<"Running at "<< maxSpeed <<" km/h" << std::endl;
}
void landAnimal::stop(){
	std::cout <<"Time to rest!!"<< std::endl;
}
void landAnimal::setMaxSpeed(int animalSpeed){
	maxSpeed = animalSpeed;
}