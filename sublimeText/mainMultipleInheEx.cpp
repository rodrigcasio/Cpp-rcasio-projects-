#include <iostream>
#include "h_DuckMultipleInheEx.hpp"

int main(){

	Duck ducky;

	ducky.setMaxHeight(200);
	ducky.setMaxSpeed(20);

	ducky.run();
	ducky.stop();

	ducky.fly();
	ducky.land();
	ducky.speak();

	return 0;
}