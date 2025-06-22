#include <iostream>
#include "h_NamespacesEx.hpp"

// this is an example of accessing a integer variable from the inside of a namespace called 'AppConfig'
int main(){

    std::cout << "The maximum amount of riders in cars is "
              << AppConfig::maxActiveRiders << std::endl;

    return 0;
}