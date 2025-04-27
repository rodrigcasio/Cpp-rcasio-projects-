#include "h_ComputerPolimorphismTInheEx.hpp"
#include <iostream>

class Desktop : public Computer{
  public:
    Desktop(std::string cName, int cRam, double cSpeed);
};
