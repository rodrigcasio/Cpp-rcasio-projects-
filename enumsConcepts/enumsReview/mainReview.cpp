#include <iostream>
#include "h_Review.hpp"

int main(){


    CoffeeSize coffee = Medium;
    printCoffeeSize(coffee);    // output : Medium Coffee

std::cout << "----" << std::endl;
    
    TrafficLight light = TrafficLight::GREEN;  
    printTrafficLight(light);   // output : Go! light is green

std::cout << "----" << std::endl;

    BeverageType drink = BeverageType::Juice;
    printBeverageType(drink);   // output : Juice 

std::cout << "----" << std::endl;

    int sizeCode = static_cast<int>(coffee);    // converting the enum to its integer value, which will be 2
    std::cout << "Size code (sizeCode has: the underlying integer value stored in the enum constant Medium): " << sizeCode << std::endl;
    std::cout << "Size of the constant: " << sizeof(sizeCode) << std::endl;

    return 0;
}
