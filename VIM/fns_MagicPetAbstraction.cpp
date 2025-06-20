#include "h_MagicPetAbstraction.hpp"
#include <iostream>

void MagicPet::makeSound(){
    std::cout << getPetName() << " makes a mystical sound!" << std::endl;
}
void MagicPet::doTrick(){
    std::cout << getPetName() << " performs a magic trick!" << std::endl;
}
