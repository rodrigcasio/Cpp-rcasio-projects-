#include <iostream>
#include "h_Car.hpp"

int main(){

	Car myCar1;

	myCar1.name = "Altima";
	myCar1.model = "Nissan";

	myCar1.honk();
	myCar1.printModel();

	return 0;
}