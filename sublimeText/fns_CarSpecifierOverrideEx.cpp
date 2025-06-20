#include "h_CarSpecifierOverrideEx.hpp"
#include <iostream>

void Car::setSpeed(int newSpeed){
	if(newSpeed > 50){
		std::cout << "Car is moving fast!" << std::endl;
	}
	speed = newSpeed;
}