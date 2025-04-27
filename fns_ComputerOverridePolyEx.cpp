#include "h_ComputerOverridePolyEx.hpp"
#include <iostream>

Computer::Computer(std::string cName, doule cSpeed, int cRam)
                  : name(cName), speed(cSpeed), ram(cRam){}

void Computer::turnOn(){
  std::cout << "Computer is now on" << std::endl;
}
void Computer::addRam(int extraRam){
  ram += extraRam;
}
void Computer::printSpecs(){
  std::cout << "PC Specs: " << std::endl
            << "Name: " << name << std::endl  
            << "RAM: " << ram << "GB" << std::endl
            << "Speed: " << speed << "GHz" << std::endl;
}
