#include <iostream>
#include "h_CoffeeSizeEnumEx.hpp"

int main(){
    
    CoffeeSize myCoffee = MEDIUM;

    if(myCoffee == MEDIUM){
        std::cout << "The coffee size is MEDIUM!" << std::endl;
    }else{
        std::cout << "The coffee is not medium size!" << std::endl;
    }
    
    return 0;
}