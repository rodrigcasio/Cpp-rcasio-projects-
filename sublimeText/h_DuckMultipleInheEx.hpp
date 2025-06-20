#ifndef DUCK_MULTIPLE_INHE_EX_HPP
#define DUCK_MULTIPLE_INHE_EX_HPP

#include <string>
#include "h_LandAnimalMultipleInheEx.hpp"
#include "h_BirdMultipleInheEx.hpp"

class Duck : public landAnimal, public Bird{
public:
	void speak();
};

#endif