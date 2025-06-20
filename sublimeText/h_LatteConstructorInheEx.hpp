#ifndef LATTE_CONSTRUCTOR_INHE_EX_HPP
#define LATTE_CONSTRUCTOR_INHE_EX_HPP
#include <iostream>
#include "h_CoffeeConstructorInheEx.hpp"

class Latte : public Coffee{
public:
	using Coffee::Coffee; 	//Latte class inherit the 2 constructor of Coffee class.
	Latte();				//own constructor of Latte class...
};

#endif 