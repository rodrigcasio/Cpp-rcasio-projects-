#include <iostream>
#include "hClassEx.hpp"

int main(){

	//1st object, using class City:
	City new_york;

	//these work, unless they are public:
	//new_york.state = "New York";
	//new_york.population = 40323;

	//object using method to asign state and population values:
	new_york.add_state("New York");
	new_york.add_population(34023);

	//object using the method to print the values:
	std::cout << new_york.get_state() <<"\n";
	std::cout << new_york.get_population() <<"\n";

	return 0;
}