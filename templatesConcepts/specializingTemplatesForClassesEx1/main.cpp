#include <iostream>
#include "h_IntWrapper.hpp" // including only the file where the specialized for Wrapper class.

#include <string>

int main(){

    Wrapper<std::string> normalWrapper("hello");
    normalWrapper.printValue();

std::cout << "----" << std::endl;

    Wrapper<int> integer(7);
    integer.printValue();
    integer.nextInt();

    return 0;
}
