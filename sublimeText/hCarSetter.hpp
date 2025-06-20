#include <string>
#include <iostream>

class Car{
	int speed;

public:
	//constructor
	Car(int initialSpeed);

	//method getter:
	int getSpeed();

	//method setter:
	int setSpeed(int carSpeed);

	//*This method in different header file* 
	//void isValid(int code, int speed);
};