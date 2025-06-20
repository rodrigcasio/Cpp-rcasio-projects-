#include "h_Numbers.hpp"
#include <iostream>

void Numbers::add(int number1, int number2){
	std::cout << "Integer add() called! Result is: "<< number1 + number2 << std::endl;
}
void Numbers::add(double number1, double number2){
	std::cout << "Double add() called! Result is: "<< number1 + number2 << std::endl;

}