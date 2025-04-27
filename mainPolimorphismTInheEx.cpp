#include "h_DesktopPolimorphismTInheEx.hpp"
#include <iostream>

int main(){

  Computer* myComputer = new Desktop("Dell", 16, 3.7);
  myComputer->printSpecs();
  myComputer->turnOn();
  myComputer->addRam(8);

std::cout << "-------------------- After using method addRam() --------------------" << std::endl;
  
  myComputer->printSpecs();
    
  return 0;
}
