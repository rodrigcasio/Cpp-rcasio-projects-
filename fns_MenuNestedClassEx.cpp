#include <h_MenuNestedClassEx.hpp"
using namespace std;

//class Menu Destructor-----
Menu::~Menu(){
  for(MenuItem* item : menuItems){
    delete item;
  }
  menuItems.clear();
}

//method def of class Menu:
void Menu::addMenuItem(string mDescription){
  menuItems.push_back(new MenuItems(mDescription));
}

void Menu::printMenu(){
  for(MenuItem* item : menuItem){
    cout << item->getDescription() << endl;
  }
}

//class MenuItems def -----

//constructor of class menuItem:
Menu::MenuItems::MenuItems(string mDescription): description(mDescription) {}
//method of MenuItem:
string Menu::MenuItem::getDescription(){
  return description; 
}
