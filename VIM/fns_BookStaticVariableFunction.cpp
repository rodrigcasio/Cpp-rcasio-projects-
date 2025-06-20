#include <iostream>
#include "h_BookStaticVariableFunction.hpp"

int Book::counter = 0;             //def the static member variable counter

Book::Book(std::string bookName): name(bookName){
    
}
void Book::printBookName() const{
    std::cout << "Book name: "<< name << std::endl;
    counter++;
}
void Book::getCounterValue(){
    std::cout << "Counter value: " << counter << std::endl; 
}
