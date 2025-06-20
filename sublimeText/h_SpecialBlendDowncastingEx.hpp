#include "h_CoffeeDowncastingEx.hpp"
#include <iostream>

class SpecialBlend : public Coffee{
public:
	SpecialBlend(int cSize, int cAmount, std::string cLocation);
	std::string getLocation();

private:
	std::string location;
};