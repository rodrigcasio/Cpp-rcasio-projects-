#ifndef PRIVATE_DOG_EX_HPP
#define PRIVATE_DOG_EX_HPP

#include "h_AnimalPrivateEx.hpp"
#include <iostream>
#include <string>

class PrivateDog : private Animal {
public:
	void setName(std::string dogName);
	void setSpecies(std::string dogSpecies);
	void setAge(int dogAge);

	std::string getName();
	std::string getSpecies();
	int getAge();
};

#endif 