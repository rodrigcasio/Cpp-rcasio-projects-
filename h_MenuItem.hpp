#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP
#include <iostream>

class MenuItem{
private:
	std::string name;
	double price;

public:
	MenuItem(std::string itemName, double itemPrice);
	std::string getItemName();
	double getItemPrice();
	void display();
};


#endif 
