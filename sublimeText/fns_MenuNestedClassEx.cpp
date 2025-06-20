#include "h_MenuNestedClassEx.hpp"

using namespace std;

//class Menu Def ----
Menu::~Menu(){
	for(MenuItem* item : menuItems){
		delete item;
	}
	menuItems.clear();
}

//method def of Menu:
void Menu::addMenuItem(string mDescription){
	menuItems.push_back(new MenuItem(mDescription));
}

void Menu::printMenu(){
	for(MenuItem* item : menuItems){
		cout << item->getDescription() <<endl;
	}
}

//class MenuItem def ---------

//constructor of class menuItem:
Menu::MenuItem::MenuItem(string mDescription): description(mDescription){}

//method def of MenuItem class:
string Menu::MenuItem::getDescription(){
	return description; 
}