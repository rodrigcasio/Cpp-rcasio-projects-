#include <iostream>
#include "h_importingNamespace.hpp"

using namespace CodecademyMath;

int main(){

    // assigning the result of the function Codecademy::pow()
    int val = pow(2, 4);
    std::cout << "2 raised to the 4th power is " << val << std::endl;

    return 0;
}