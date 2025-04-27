#include "h_DesktopOverridePolyEx.hpp"
#include <iostream>

int main(){

  Computer* myComputer = new Desktop("Samsung", 3.7, 16);
  myComputer->turnOn();
  myComputer->printSpecs();

std::cout << "------- After using the method addRam() from overrided class Desktop() -------" << std::endl;

  myComputer.addRam(4);
  myComputer.printSpecs();

  delete myComputer;
  
  return 0;
}
