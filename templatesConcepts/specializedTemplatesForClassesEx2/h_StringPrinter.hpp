#include "h_Printer.hpp"
#include <iostream>

template <>
class Printer<std::string> {
    private:
    std::string value;  

    public:
    Printer(std::string mValue) : value(mValue){}

    void print(){
        std::cout << "Generic value: " << value << std::endl;
    }
    void specialFunction(){
        std::cout << "Special function called!" << std::endl;
    }
    
};
