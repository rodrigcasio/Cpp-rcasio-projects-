#include "h_CarProtectedEx.hpp"
#include <iostream>

int main(){

	Car myCar1;

	myCar1.setType("Car");
	myCar1.setMake("BMW");
	myCar1.setModel("335i");
	myCar1.setYear(2008);

	myCar1.displayCarInfo();

	return 0;
}