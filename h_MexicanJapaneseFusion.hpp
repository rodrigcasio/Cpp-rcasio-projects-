#ifndef MEXICAN_JAPANESE_FUSION_HPP
#define MEXICAN_JAPANESE_FUSION_HPP
#include "h_Restaurant.hpp"
#include "h_MexicanRestaurant.hpp"
#include "h_JapaneseRestaurant.hpp"

class MexicanJapaneseFusion : public MexicanRestaurant, public JapaneseRestaurant{
public:
	MexicanJapaneseFusion(std::string n, std::string addr, int spceLevel, bool tatamiAvailable);
	void describeCuisine();
	void displaySpecialty();
};

#endif 
