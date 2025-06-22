#include <iostream>
#include "h_NamespacesEx.hpp"
int main(){

    std::cout << "The maximum amount of riders in cars is "
              << AppConfig::maxActiveRiders << std::endl;

    return 0;
}