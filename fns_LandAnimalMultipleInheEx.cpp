#include "h_LandAnimalInheEx.hpp"
#include <iostream>

void landAnimal::run(){
  std::cout <<"Running at " << maxSpeed <<"km/h" << std::endl;
}
void landAnimal::stop(){
  std::cout <<"Time to stop" << std::endl;
}
void landAnimal::setMaxSpeed(int animalMaxSpeed){
  maxSpeed = animalMaxSpeed;
}
