#ifndef JAPANESE_RESTAURANT_HPP
#define JAPANESE_RESTAURANT_HPP
#include "h_Restaurant.hpp"

class JapaneseRestaurant : virtual public Restaurant{
private:
	bool hasTatami;

public:
	JapaneseRestaurant(std::string n, std::string addr, bool tatamiAvailable = false);
	bool getTatamiAvailable();
	void describeCuisine();
};


#endif
