#include "h_DesktopOverridePolyEx.hpp"
#include <iostream>

int main(){

	Computer* myComputer = new Desktop("Samsung", 3.7, 16);
	myComputer->printSpecs();

std::cout << "------After adding using addRam() overrided in Desktop class -----" << std::endl;

	myComputer->addRam(4); // adding ram form Desktop() using virtual in computer class method virtual void addRam()
	myComputer->printSpecs();


	delete myComputer;

	return 0;
}