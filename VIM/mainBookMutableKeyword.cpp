#include <iostream>
//example of using mutable keyword
#include "h_BookMutableKeyword.hpp"
int main(){
    
    Book book1("Six Easy Pieces");
    Book book2("Grokking Algorithms");

    book1.printBookName();
    book1.printBookName();

    book2.printBookName();
    book2.printBookName();       //counter = 2 since we used book2.printBookName() 2 times..

    std::cout << "Counter value for "<< book1.getBookName() << ": " << book1.getCounter() << std::endl;
    std::cout << "Counter value for "<< book2.getBookName() << ": " << book2.getCounter() << std::endl;
    
    return 0;
}
