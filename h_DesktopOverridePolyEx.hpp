#include "h_ComputerOverridePolyEx.hpp"
#include <iostream>

class Desktop : public Computer{
  public:
    Desktop(std::string cName, double cSpeed, int cRam);
    void addRam(int extraRam);
};
