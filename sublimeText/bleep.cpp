#include <iostream>
#include <string>
#include "hBleep.hpp"

int main(){

	std::string word = "broccoli";
	std::string text ="I like broccoli, broccoli is good for your health";

	std::cout <<"Before the function: " << text <<"\n";
	bleep(word, text);
	std::cout <<"After using function: "<< text <<"\n";

	return 0;
}