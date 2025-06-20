#include "h_JuiceVirtualDestructorEx.hpp"
#include <iostream>

Juice::Juice(std::string juiceType, int juiceSize): type(juiceType), size(juiceSize){}

void Juice::setJuiceSize(int newSize){
	size = newSize;
} 
void Juice::setJuiceType(std::string newType){
	type = newType;
}

std::string Juice::getJuiceType(){
	return type;
}
int Juice::getJuiceSize(){
	return size;
}

Juice::~Juice(){
	std::cout << "Juice is done! Recycling bottle" << std::endl;
}
