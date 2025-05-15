#include "h_DogAbstraction.hpp"
#include <iostream>

void Dog::makeSound(){
  std::cout << getPetName() << " is barking! Woof!" << std::endl;
}
