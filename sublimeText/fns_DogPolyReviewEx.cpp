#include "h_DogPolyReviewEx.hpp"
#include <iostream>

void Dog::makeSound(){
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called!." << std::endl;
}