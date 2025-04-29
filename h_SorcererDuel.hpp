#ifndef SORCERER_DUEL_HPP
#define SORCERER_DUEL_HPP
#include "h_CharacterDuel.hpp"

class Sorcerer : public Character{
  public:
    Sorcerer(std::string cName, int cPower, std::string sorType);
    void attack() override;
    void specialAttack();
    std::string getSorcererType();
    void displayInfo() override;

  private:
    std::string sorcererType;
};

#endif
