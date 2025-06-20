#include "h_BirdMultipleInheEx.hpp"
#include <iostream>

void Bird::fly(){
	std::cout <<"flying at " << maxHeight <<" meters about sea level" << std::endl;

}
void Bird::land(){
	std::cout <<"Time to land!!"<< std::endl;
}
void Bird::setMaxHeight(int animalHeight){
	maxHeight = animalHeight;
}