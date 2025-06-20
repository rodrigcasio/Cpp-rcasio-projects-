#include "h_DogAbstracion.hpp"
#include <iostream>

void Dog::makeSound(){
    std::cout << getPetName() <<" is barking! Woof!" << std::endl;
}
