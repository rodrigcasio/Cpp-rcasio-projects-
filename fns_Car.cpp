#include "h_Car.hpp"
#include <iostream>

void Car::honk(){
  std::cout << name <<" goes Beep Beep!" <<std::endl;
}

void Car::printModel(){
  std::cout << "The car is: " << model << std::endl;
}
