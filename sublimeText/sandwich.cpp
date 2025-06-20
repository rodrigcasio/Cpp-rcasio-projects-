#include <iostream>


std::string make_sandwich(std::string ing1, std::string ing2);

int main(){

	std::string ingredient1;
	std::string ingredient2;

	std::cout <<"Write two main ingredients for your sandwich\n";
	std::cout <<"#1: ";
	std::cin >> ingredient1;
	std::cout << "#2: ";
	std::cin >> ingredient2;

	std::cout << make_sandwich(ingredient1, ingredient2);

	return 0;
}

std::string make_sandwich(std::string ing1, std::string ing2){
	std::string sandwich = "";

	sandwich += "bread\n";
	sandwich += ing1 + "\n";
	sandwich += ing2 + "\n";
	sandwich += "bread\n";

	return sandwich;
}