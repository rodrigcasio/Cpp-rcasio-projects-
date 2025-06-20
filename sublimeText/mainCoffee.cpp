#include <iostream>
#include "hCoffee.hpp"

//func dec are in hCoffee.hpp


int main(){

	std::cout << make_coffee();
	std::cout << make_coffee(true, true);

	std::cout << make_coffee(true);
	std::cout << make_coffee(false, true);

	return 0;
}

//fun def are in funcCoffee.cpp
