#include "h_BookMutableKeyword.hpp"
#include <iostream>

Book::Book(std::string bookName): name(bookName), counter(0) {
  //setting counter as the value of default 0
}
std::string Book::getBookName() const{
  return name;
}
void Book::printBookName() const{          //changing the mutable variable value.
  std::cout << "Book name: " << name << std::endl
            << "counter increase for this book!" << std::endl << std::endl;
  counter++;
}
int Book::getCounter() const{
  return counter;
}
