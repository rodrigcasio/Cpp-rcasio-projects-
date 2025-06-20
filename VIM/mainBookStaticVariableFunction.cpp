#include <iostream>
#include "h_BookStaticVariableFunction.hpp"
//example of using static variable and function to get the value of counter
int main(){
    
    //creating objects:
    Book book1("Six Easy Pieces");
    Book book2("Grokking algorithms");
    
    book1.printBookName();
    book2.printBookName();

    Book::getCounterValue();        //should print 2 

    return 0;
}
