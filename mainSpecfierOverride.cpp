#include "h_FastCarSpecifierOverrideEx.hpp"
#include <iostream>

int main() {

  Car* myCar = new FastCar();

  myCar.setSpeed(400)
  delete myCar;
  // practice good management memory by deleting the pointer at the end of the program 

  return 0;
}
