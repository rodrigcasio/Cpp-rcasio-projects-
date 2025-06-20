#include <iostream>
#include "h_MenuNestedClassEx.hpp"

using namespace std;

int main(){

	Menu burgerPalace;

	burgerPalace.addMenuItem("Classic Burger: A traditional beef burger with lettuce, tomato, and pickles.");
	burgerPalace.addMenuItem("BBQ Smokehouse Burger: A hearty burger with smoky BBQ sauce, onion rings, and cheddar");
	burgerPalace.addMenuItem("Spicy Jalapeño Burger: Beef patty with pepper jack cheese, jalapeños, and spicy sauce.");
	burgerPalace.addMenuItem("Veggie Delight Burger: A plant-based patty with fresh veggies and avocado spread.");

	cout <<"Welcome to Burger Palace! Here's our menu: " << endl;
	burgerPalace.printMenu();

	return 0;
}