#include "h_Vehicle.hpp"
#include <iostream>

void Vehicle::move(){
  std::cout << name <<" is moving "<< speed <<" km/h" << std::endl;
}
