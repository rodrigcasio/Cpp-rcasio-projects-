#include <iostream>
#include "h_CoffeeSizeEnumEx.hpp"

// example of implicit conversion
// which means these enums (SMALL, MEDIUM and LARGE),  can be automatically converted to integers without explicit casting 
// or assign them directly to integer variables 

int main(){
    
    int myCoffeeSize = MEDIUM;

    if(myCoffeeSize == MEDIUM){
        std::cout << "The integer value of myCoffeeSize is: " << myCoffeeSize << std::endl;
    }else{
        std::cout << "No available output" << std::endl;
    }

    // increasing the value of myCoffeeSize 
    myCoffeeSize += 1;

    if(myCoffeeSize == MEDIUM + 1){
        std::cout << "New integer value of myCoffeeSize is: " << myCoffeeSize << std::endl;
    }else{
        std::cout << "No available output" << std::endl;
    }

std::cout << "----" << std::endl;

    if(myCoffeeSize == LARGE){
        std::cout << "Now the integer has the same value as the enum constant integer of 2." << std::endl
                  << "myCoffeeSize value: " << myCoffeeSize << std::endl
                  << "LARGE default  constant integer value: " << LARGE << std::endl;
    }   

    return 0;
}
