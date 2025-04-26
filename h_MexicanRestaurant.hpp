#ifndef MEXICAN_RESTAURANT_HPP
#define MEXICAN_RESTAURANT_HPP
#include <iostream>
#include "h_Restaurant.hpp"

class MexicanRestaurant : virtual public Restaurant{
private:
	int spiceLevel;

public:
	MexicanRestaurant(std::string n, std::string addr, int spceLevel); //constructor
	int getSpiceLevel();
	void describeCuisine();
};


#endif 
