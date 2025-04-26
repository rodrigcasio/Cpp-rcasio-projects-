#include "h_JapaneseRestaurant.hpp"
#include <iostream>

JapaneseRestaurant::JapaneseRestaurant(std::string n, std::string addr, bool tatamiAvailable)
									  : Restaurant(n, addr), hasTatami(tatamiAvailable) {}

bool JapaneseRestaurant::getTatamiAvailable(){
	return hasTatami;
}
void JapaneseRestaurant::describeCuisine(){
	if(getTatamiAvailable()){
		std::cout <<"Traditional Japanese cuisine tatami seating available" << std::endl << std::endl;
	}
	else{
		std::cout << "Traditional Japanese cuisine" << std::endl << std::endl;
	}
}
