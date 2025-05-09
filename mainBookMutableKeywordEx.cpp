#include <iostream>
#include "h_BookMutableKeyword.hpp"
//example of using mutable keyword 
int main(){

  Book book1("Six Easy Pieces");
  Book book2("Grokking Algorithms");

  book1.printBookName();
  book1.printBookName();

  book2.printBookName();
  book2.printBookName();

  std::cout << "Counter value for " << book1.getBookName() << ": " book1.getCounter() << std::endl;
  std::cout << "Counter value for " << book2.getBookName() << ": " book1.getCounter() << std::endl;

  return 0;
}
