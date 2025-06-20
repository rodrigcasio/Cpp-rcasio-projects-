#include "h_FlyingCarInterfacesEx.hpp"
#include <iostream>

int main(){

	Aircraft* firstFlyingCar = new FlyingCar();
	Car* secondFlyingCar = new FlyingCar();

	firstFlyingCar->fly(200);
	secondFlyingCar->drive(50);

	delete firstFlyingCar;
	delete secondFlyingCar;

	return 0;
}