#include "h_AppleJuiceVirtualDestructorEx.hpp"
#include <iostream>

AppleJuice::AppleJuice(int juiceSize, std::string apple): Juice("apple", juiceSize), appleType(apple){
	std::cout << juiceSize << " mL apple juice made from " << apple << " apples." << std::endl;
}

std::string AppleJuice::getAppleType(){
	return appleType;
}

AppleJuice::~AppleJuice(){
	std::cout << "Apple juice is finished!" << std::endl;
}