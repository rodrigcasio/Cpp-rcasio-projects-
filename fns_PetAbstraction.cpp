#include "h_PetAbstraction.hpp"
#include <iostream>

void Pet::setPetName(std::string petName){
  name = petName;
}
std::string Pet::getPetName(){
  return name;
}
void Pet::setPetAge(int petAge){
  age = petAge;
}
void Pet::eat(){
  std::cout << getPetName() << " is eating" << std::endl;
}
