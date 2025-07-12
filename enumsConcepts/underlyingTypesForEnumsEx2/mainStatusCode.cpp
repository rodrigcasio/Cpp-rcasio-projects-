#include <iostream>
#include "h_StatusCode.hpp"

int main() {

    // 1. declaring the variable 'code' of type StatusCode (name of the enum class)
    StatusCode code = StatusCode::WARNING;

    // comparing sizes of variables type : StatusCode and an normal integer
    std::cout << "Size of the StatusCode: " << sizeof(StatusCode) << " byte(s)" << std::endl;
    std::cout << "Size of an int: " << sizeof(int) << " byte(s)" << std::endl;

    // assigning the value of the enum constant into a new unsigned char variable 
    unsigned char codeValue = static_cast<unsigned char>(code);

    // getting the value of the new unsigned char variable 
    std::cout << "The underlying value of the variable \"code\" (as unsigned char) is: " << codeValue << std::endl;

std::cout << "---" << std::endl;

    std::cout << "Character representation: " << codeValue << std::endl;
    std::cout << "Integer representation: (the number of what represents 'W'): " << static_cast<int>(codeValue) << std::endl;
    
std::cout << "---" << std::endl;

    // practice of static casting
    int number = 89;

    std::cout << "Character representation: " << static_cast<unsigned char>(number) << std::endl;
    std::cout << "Integer representation: " << number << std::endl;
    return 0;
}
