#ifndef WARRIOR_DUEL_HPP
#define WARRIOR_DUEL_HPP

#include "h_CharacterDuel.hpp"
#include <iostream>

class Warrior : public Character{
public:
	Warrior(std::string cName, int cHealth, int cPower);
	void attack() override;
	void specialAttack();

};

#endif 