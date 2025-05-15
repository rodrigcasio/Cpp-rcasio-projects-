#include "h_CatAbstraction.hpp"
#include <iostream>

void Cat::makeSound(){
  std::cout << getPetName() << " is meowing! Meow!" << std::endl;
}
