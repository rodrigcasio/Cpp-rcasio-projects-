#include <iostream>
#include "h_BookMutableKeyword.hpp"

Book::Book(std::string bookName): name(bookName), counter(0){
    
}
std::string Book::getBookName() const{
    return name;
}

void Book::printBookName() const{
    std::cout << "Book name: " << name << std::endl 
              << "counter increase for this book object!" << std::endl << std::endl;
    counter++;
}
int Book::getCounter() const{
    return counter;
}

