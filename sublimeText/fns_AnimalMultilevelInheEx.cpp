#include "h_AnimalMultilevelInheEx.hpp"
#include <iostream>

void Animal::eat(){
	std::cout <<"Animal is eating"<< std::endl;
}
void Animal::setAnimalType(std::string animalType){
	typeOfAnimal = animalType;
}
std::string Animal::getAnimalType(){
	return typeOfAnimal;
}