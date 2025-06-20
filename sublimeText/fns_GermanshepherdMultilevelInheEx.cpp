#include "h_GermanshepherdMultilevelInheEx.hpp"
#include <iostream>

void GermanShepherd::guard(){
	std::cout <<"German Shepherd is guarding the area!"<< std::endl;
}
void GermanShepherd::printInfo(){
	std::cout <<"German Shepherd is an animal of type "<< getAnimalType() << std::endl;
	std::cout <<"German Shepherd's name is "<< getDogName() << std::endl;
}