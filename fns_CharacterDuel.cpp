#include "h_CharacterDuel.hpp"
#include <iostream>

Character::Character(std::string cName, int cHealth, int cPower): name(cName), health(cHealth), power(cPower){}

void Character::attack(){
  std::cout << "-- Attack move --" << std::endl 
            << "Basic Low Attack" << std::endl << std::endl;
}
void Character::displayInfo(){
  std::cout << "\t-Character Stats-" << std::endl
            << " Name: " << name << std::endl
            << " Health: " << health << std::endl
            << " Power: " << power << std::endl << std::endl;
}
