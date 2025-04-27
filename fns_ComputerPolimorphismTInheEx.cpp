#include "h_ComputerPolimorphismTInheEx.hpp"
#include <iostream>

Computer::Computer(std::string cName, int cRam, double cSpeed): name(cName), ram(cRam), speed(cSpeed) {}

void Computer::turnOn(){
  std::cout << "The Computer is turned on" << std::endl;
}
void Computer::addRam(int extraRam){
  ram += extraRam;
}
void Computer::printSpecs(){
  std::cout << "Specs are: " << std::endl
            << "Name: " << name << std::endl
            << "Ram: " << ram << "GB" << std::endl
            << "Speed: " << speed << "GHz" << std::endl;
}
