#include <iostream>
#include "hCoffee.hpp"
#include <string>


//fun def:
std::string make_coffee(bool milk, bool sugar){
	std::string coffee = "Here's your coffee";
	if(milk && sugar){ //if milk and sugar true..
		coffee += " with milk and sugar";
	}
	else if(milk){ //if only milk true..
		coffee += " with milk";
	}
	else if(sugar){
		coffee += " with sugar";
	}
	
	return coffee + ".\n";
}