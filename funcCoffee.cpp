#include <iostream>
#include <string>
#include "hCoffee.hpp"

//fun def:
std::string make_coffee(bool milk, bool sugar){
  std::string coffee = "Here is your coffe";
  if(milk && sugar){
    coffee += " with milk and sugar";
  }
  else if(milk){
    coffee += " with milk";
  }
  else if(sugar){
    coffee += " with sugar";
  }

  return coffe + ".\n";
}
