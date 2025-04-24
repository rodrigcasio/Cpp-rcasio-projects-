#include "h_AnimalPrivateEx.hpp"
//setters:
void Animal::eat(){
  std::cout <<"The animal is eating"<< std::endl;
}
void Animal::sleep(){
  std::cout << "The animal is sleeping" << std::endl;
}
void Animal::makeSound(){
  std::cout << "The Animal is making a soung" << std::endl;
}
//getters:
std::string Animal::getName(){
  return name;
}
