#include "h_WarriorDuel.hpp"
#include <iostream>

Warrior::Warrior(std::string cName, int cHealth, int cPower): Character(cName, cHealth, cPower) {}

void Warrior::attack(){
  std::cout << "-- Attack move --" << std::endl
            << "Swings a mighty sword!" << std::endl << std::endl;
}
void Warrior::specialAttack(){
  std::cout << "-- Special attack move! --" << std::endl
            << name << " a devasting double strike!" << std::endl << std::endl;
}
