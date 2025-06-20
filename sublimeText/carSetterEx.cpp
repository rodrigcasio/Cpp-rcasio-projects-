#include <iostream>
#include <string>
#include "hCarSetter.hpp"
#include "h_IsValidSetterEx.hpp"

int main(){

	// i THINK this is a vector of objects!: idk
	std::vector <Car> cars ={Car(0), Car(0), Car(0)};

	// setting speed to the indexes of cars vector i think... which are objects:

	int code1 = cars[0].setSpeed(100);
	int code2 = cars[1].setSpeed(-3);
	int code3 = cars[2].setSpeed(250);

	isValid(code1, cars[0].getSpeed());
	isValid(code2, cars[1].getSpeed());
	isValid(code3, cars[2].getSpeed());

	return 0;
}