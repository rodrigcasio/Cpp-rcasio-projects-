#include "h_CatPolyReviewEx.hpp"
#include <iostream>

void Cat::makeSound(){
	std::cout << "Meow!" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called." << std::endl;
}