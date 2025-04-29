#include "h_SorcererDuel.hpp"

Sorcerer::Sorcerer(std::string cName, int cPower, std::string sorType): Character(cName, 100, cPower), sorcererType(sorType);

void Sorcerer::attack(){
  std::cout << "-- Attack move --" << std::endl
            << "Casts spell Avada Kedavra" << std::endl << std::endl;
}
void Sorcerer::specialAttack(){
  std::cout << "-- Special Attack move! --" << std::endl
            << name << " drinks a potion to increase magic power.. and pulls an AK-47" << std::endl << std::endl;
}
std::string Sorcerer::geSorcererType(){
  return sorcererType;
}
void Sorcerer::displayInfo(){
  std::cout << "\t-Character Stats-" << std::endl
            << " Name: " << name << std::endl
            << " Sorcerer type: " << getSorcererType() << std::endl
            << " Health: " << health << std::endl
            << " Power: " << power << std::endl << std::endl;
}
