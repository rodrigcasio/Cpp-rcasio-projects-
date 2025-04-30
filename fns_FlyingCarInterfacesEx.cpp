#include "h_FlyingCarInterfacesEx.hpp"
#include <iostream>

void FlyingCar::drive(int carSpeed){
  speed = carSpeed;
  std::cout << "Flying car is driving at: " << getCarSpeed() << " km/h" << std::endl;
}
void FlyingCar::stop(){
  speed = 0;
  std::cout << "Flying car is stopped" << std::endl;
}
void FlyingCar::fly(int carHeight){
  heigh = carHeight;
  std::cout << "Flying car is flying high at " << getCarHeight() << " meters" << std::endl;
}
void FlyingCar::land(){
  height = 0;
  std::cout << "Flying car has landed" << std::endl;
}

int FlyingCar::getCarSpeed(){
  return speed;
}
int FlyingCar::getCarHeight(){
  return height;
}
