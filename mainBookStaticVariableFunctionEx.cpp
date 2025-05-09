#include <iostream>
#include "h_BookStaticVariableFunctionEx.hpp"
//example of using static variable and function to get the value of counter
int main(){

  Book book1("Six Easy Pieces");
  Book book2("Grokking Algorithms");

  book1.printBookName();
  book2.printBookName();

  Book::getCounterValue();  //should print 2

  return 0;
}
