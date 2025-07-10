#include <iostream>
#include "h_enumClassesEx.hpp"

// Example to use declare an object of an enum class.
// Accessing a specific constant with the '::' scope resolution operator.
int main(){
    
    TrafficLight currentTraffic = TrafficLight::RED;

    if(currentTraffic == TrafficLight::RED){
        std::cout << "Stop! The light is red." << std::endl;
    }else if(currentTraffic == TrafficLight::YELLOW){
        std::cout << "Caution! The light is yellow" << std::endl;
    }else if(currentTraffic == TrafficLight::GREEN){
        std::cout << "Go! The light is green." << std::endl;
    }else{
        std::cout << "Unknown traffic light state!" << std::endl;
    }

    return 0;
}