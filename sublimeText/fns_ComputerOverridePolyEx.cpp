#include "h_ComputerOverridePolyEx.hpp"
#include <iostream>

Computer::Computer(std::string cName, double cSpeed, int cRam)
				   : name(cName), speed(cSpeed), ram(cRam) {}

void Computer::turnOn(){
	std::cout << "Computer is now on" << std::endl;
}	
void Computer::addRam(int extraRam){
	ram += extraRam;
}
void Computer::printSpecs(){
	std::cout << "The Specs are: " << std::endl
			  << "Name: " << name << std::endl
			  << "Ram: " << ram << "GB" << std::endl
			  << "CPU Speed: "<< speed << "GHz" <<std::endl;
}