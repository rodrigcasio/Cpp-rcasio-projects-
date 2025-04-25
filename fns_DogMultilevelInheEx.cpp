#include "h_DogMultilevelInheEx.hpp"
#include <iostream>

void Dog::bark(){
  std::cout <<"Dog is barking"<< std::endl;
}
void Dog::setDogName(std::string dogName){
  nameOfDog = dogName;
}
std::string Dog::getDogName(){
  return nameOfDog;
}o
