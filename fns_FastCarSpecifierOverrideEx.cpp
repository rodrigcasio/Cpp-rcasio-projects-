#include "h_FastCarSpecifierOverrideEx.hpp"
#include <iostream>

void FastCar::setSpeed(int newSpeed){
  if(newSpeed > 100){
    std::cout << "Fast car is moving too fast!" << std::endl;
  }
  speed = newSpeed;
}
