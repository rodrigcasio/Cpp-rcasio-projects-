#include "h_DesktopOverridePolyEx.hpp"
#include <iostream>

Desktop::Desktop(std::string cName, double cSpeed, int cRam)
                : Computer(cName, cSpeed, cRam);

void Desktop::addRam(int extraRam){
  ram += extraRam;
  std::cout << "More RAM succesfully added!" << std::endl;
}
