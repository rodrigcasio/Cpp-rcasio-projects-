#include "h_MexicanRestaurant.hpp"
#include <iostream>

MexicanRestaurant::MexicanRestaurant(std::string n, std::string addr, int spceLevel)
									: Restaurant(n, addr), spiceLevel(spceLevel) {}

int MexicanRestaurant::getSpiceLevel(){
	return spiceLevel;
}

void MexicanRestaurant::describeCuisine(){
	std::cout <<"Authentic Mexican cuisine with spice level " << getSpiceLevel() 
			  <<" out of 5." << std::endl << std::endl;
}