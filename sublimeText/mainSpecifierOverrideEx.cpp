#include "h_FastCarSpecifierOverrideEx.hpp"
#include <iostream>

int main(){

	//Car is the base class
	// FastCAr is the derived class from Car..


	Car* myCar = new FastCar();

	myCar->setSpeed(400);

	delete myCar; 
	// practice good memory management by deleting the pointer at the end of the program.

	return 0;
}