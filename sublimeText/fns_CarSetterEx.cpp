#include "hCarSetter.hpp"
#include <string>
#include <iostream>

//constructor def:
Car::Car(int initialSpeed): speed(initialSpeed){}

//method getter def:
int Car::getSpeed(){
	return speed;
}

//method setter def:
int Car::setSpeed(int carSpeed){
	int returnCode;
	if(carSpeed > 200){
		returnCode = 3;
	}
	else if(carSpeed < 0){
		returnCode = 2;
	}
	else{
		speed = carSpeed;
		returnCode = 1;
	}

	return returnCode;
}

//method created by codecademy:
//void Car::isValid(int code, int speed){}