#ifndef CHARACTER_DUEL_HPP
#define CHARACTER_DUEL_HPP
#include <iostream>
#include <string>

class Character {
public:
	Character(std::string cName = "Elden King", int cHealth = 100, int cPower = 50);
	virtual void attack();
	virtual void displayInfo();

protected:
	std::string name;
	int health;
	int power;
};

#endif