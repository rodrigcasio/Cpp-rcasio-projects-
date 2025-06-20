#ifndef DOG_MULTILEVEL_INHE_EX_HPP
#define DOG_MULTILEVEL_INHE_EX_HPP
#include "h_AnimalMultilevelInheEx.hpp"

class Dog : public Animal {
public:
	void bark();
	void setDogName(std::string dogName);
	std::string getDogName();

private:
	std::string nameOfDog;
};

#endif 