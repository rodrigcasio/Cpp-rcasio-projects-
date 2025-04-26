#include "h_MexicanJapaneseFusion.hpp"
#include <iostream>

MexicanJapaneseFusion::MexicanJapaneseFusion(std::string n, std::string addr, int spceLevel, bool tatamiAvailable)
											: Restaurant(n, addr), MexicanRestaurant(n, addr, spceLevel), JapaneseRestaurant(n, addr, tatamiAvailable) {}

void MexicanJapaneseFusion::describeCuisine(){
	std::cout <<"A unique fusion of Mexican and Japanese cuisines" << std::endl << std::endl;
}
void MexicanJapaneseFusion::displaySpecialty(){
	std::cout <<"Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!" << std::endl << std::endl;
}
