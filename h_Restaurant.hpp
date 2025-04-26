#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <iostream>
#include <vector>
#include "h_MenuItem.hpp"

class Restaurant{
private:
	std::string name;
	std::string address;


public:
	Restaurant(std::string n, std::string addr);
	std::string getRestaurantName();
	std::string getRestaurantAddress();

	void displayInfo();
	void describeCuisine();
	void addMenuItem(MenuItem& item);
	void displayMenu();

protected:
	std::vector <MenuItem> menu;

};

#endif
