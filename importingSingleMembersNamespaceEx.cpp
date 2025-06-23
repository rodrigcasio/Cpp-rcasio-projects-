#include <iostream>
#include "h_ImportingSingleMembersNamespaceEx.hpp"
using CodecademyMath::pow;      // importing specific fucntions or specific members.
using CodecademyMath::fibonacci;
using CodecademyMath::isPrime;

int main(){

    int val1 = pow(4, 6);
    int val2 = CodecademyMath::cube(3);
    int val3 = CodecademyMath::factorial(7);
    int val4 = fibonacci(8);
    int val5 = isPrime(78293);

    std::cout << "4 to the 6th power is " << val1 << std::endl;
    std::cout << "3 cubed is " << val2 << std::endl;
    std::cout << "7! is " << val3 << std::endl;
    std::cout << "8th fibonacci number is " << val4 << std::endl;
    std::cout << "Is 78293 a prime number? " << val5 << std::endl;
    




    return 0;
}