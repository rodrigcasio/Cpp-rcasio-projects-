#include "h_NumbersOverloading.cpp"

void add(int number1, int number2){
  std::cout << "Integer add() called! Result: " << number1 + number2 << std::endl;
}
void add(double number1, double number2){
  std::cout << "Double add() called! Result: " << number1 + number2 << std::endl;
}
