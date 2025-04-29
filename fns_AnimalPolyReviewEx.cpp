#include "h_AnimalPolyReviewEx.hpp"
#include <iostream>

void Animal::makeSound(){
  std::cout << "Some generic animal sound" << std::endl
}

Animal::~Animal(){
  std::cout << "Animal destructor called." << std::endl;
}
