#include "h_DesktopPolimorphismTInheEx.hpp"
#include <iostream>

int main(){

	//declaring a variable called myComputer that is a Desktop but is treated as a Computer
	Computer* myComputer = new Desktop("Dell", 16, 3.7);
	myComputer->printSpecs();
	myComputer->turnOn();
	myComputer->addRam(8);

std::cout <<"----------------Specs after using method addRam()---------------" << std::endl;

	myComputer->printSpecs();
	
	return 0;
}