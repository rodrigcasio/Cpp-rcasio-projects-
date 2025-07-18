#include <iostream>
#include "h_StringPrinter.hpp"

int main(){

    Printer<int> normalPrinter(7777);
    normalPrinter.print();

std::cout << "---" << std::endl;

    Printer<std::string> stringPrinter("Hello! im from an specialized template class of <string>");
    stringPrinter.print();
    stringPrinter.specialFunction();
    return 0;
}
