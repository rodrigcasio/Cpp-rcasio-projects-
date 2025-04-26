#include "h_MenuItem.hpp"
#include <iostream>
#include <iomanip>

MenuItem::MenuItem(std::string itemName, double itemPrice): name(itemName), price(itemPrice) {}

std::string MenuItem::getItemName(){
	return name;
}
double MenuItem::getItemPrice(){
	return price;
}

void MenuItem::display(){
	std::cout <<"[" << getItemName() << "] - $[" << std::fixed << std::setprecision(2) << getItemPrice() << "]" << std::endl;
}
