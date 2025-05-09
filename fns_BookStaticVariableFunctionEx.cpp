#include "h_BookStaticVariableFunction.hpp"
#include <iostream>

int Book::counter = 0;         //defining the static member variable

Book::Book(std::string bookName): name(bookName) {
  //constructor empty
}
void Book::printBookName() const{
  std::string << "Book name: " << name << std::endl;
  counter++;
}
void Book::getCounterValue() {
  std::cout << "Counter value: " << counter << std::endl; 
}
