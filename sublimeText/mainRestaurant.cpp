#include "h_MexicanJapaneseFusion.hpp"
#include <iostream>

int main(){

	std::cout <<"Testing Restaurant Inheritance Hierarchy:" << std::endl;

	MexicanRestaurant restaurant1("Tacos Providencia", "77 Rosas Ave", 4);
	JapaneseRestaurant restaurant2("Nikoy", "456 Sushi Road", true);
	MexicanJapaneseFusion restaurant3("Fusion Fiesta", "779 Marcos Ave", 3, true);

	restaurant1.displayInfo();
	restaurant1.describeCuisine();

	restaurant2.displayInfo();
	restaurant2.describeCuisine();

	restaurant3.displayInfo();
	restaurant3.describeCuisine();
	restaurant3.displaySpecialty();

//---------------- Creating Items for each restaurant --------------

	//MexicanRestaurant Items
	MenuItem item1("Tacos al Pastor", 8.99);
	MenuItem item2("Enchiladas Suizas", 12.99);

	//JapaneseRestaurant Items
	MenuItem item3("Sushi Roll" , 14.99);
	MenuItem item4("Miso Ramen", 11.99);

	//MexicanJapaneseFusion Items
	MenuItem item5("Sushi Taco", 15.99);
	MenuItem item6("Wasabi Guacamole", 7.99);

//-------------- Adding items to their restaurant -------------------

	restaurant1.addMenuItem(item1);
	restaurant1.addMenuItem(item2);

	restaurant2.addMenuItem(item3);
	restaurant2.addMenuItem(item4);

	restaurant3.addMenuItem(item5);
	restaurant3.addMenuItem(item6);

//------------------- Display their menus ---------------------------

	restaurant1.displayMenu();
	restaurant2.displayMenu();
	restaurant3.displayMenu();

	return 0;
}