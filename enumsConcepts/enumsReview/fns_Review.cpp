#include "h_Review.hpp"
#include <iostream>
// definition of functions:

void printCoffeeSize(CoffeeSize size){
    switch(size){
        case Small: std::cout << "Small Coffee" << std::endl; break;
        case Medium: std::cout << "Medium Coffee" << std::endl; break;
        case Large: std::cout << "Large Coffee" << std::endl; break;
        default: std::cout << "Unknown size" << std::endl; 
    }
}

void printTrafficLight(TrafficLight light){
    switch(light){
        case TrafficLight::RED: std::cout << "STOP! light is red" << std::endl; break;
        case TrafficLight::YELLOW: std::cout << "Caution! start slowing down, light is yellow" << std::endl; break;
        case TrafficLight::GREEN: std::cout << "Go! light is green" << std::endl; break;
        default: std::cout << "Unkown traffic light" << std::endl;
    }
}

void printBeverageType(BeverageType type){
    switch(type){
        case BeverageType::Coffee: std::cout << "Coffee" << std::endl; break;
        case BeverageType::Tea: std::cout << "Tea" << std::endl; break;
        case BeverageType::Juice: std::cout << "Juice" << std::endl; break;
        default: std::cout << "Unknown beverage" << std::endl;
    }
}