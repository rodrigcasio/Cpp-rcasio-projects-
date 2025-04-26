#include "h_Restaurant.hpp"
#include <iostream>

Restaurant::Restaurant(std::string n, std::string addr): name(n), address(addr) {}

std::string Restaurant::getRestaurantName(){
	return name;
}
std::string Restaurant::getRestaurantAddress(){
	return address;
}

void Restaurant::displayInfo(){
	std::cout <<"Restaurant name: " << getRestaurantName() << std::endl
			  <<"Restaurant address: " << getRestaurantAddress() << std::endl;
}
void Restaurant::describeCuisine(){
	std::cout <<"This restaurant serves various types of cuisines." << std::endl;
}
void Restaurant::addMenuItem(MenuItem& item){
	menu.push_back(item); // stores the items inside the vector menu.
}
void Restaurant::displayMenu(){
	if(menu.empty()){
		std::cout <<"No items found in the current menu" << std::endl;
	}
	std::cout<< getRestaurantName() << "'s Menu: " << std::endl;
	for(auto& item : menu){
		item.display(); //diplays each item using the method display from MenuItems class
	}
	std::cout << std::endl;
}
