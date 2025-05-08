#include "h_BikeEx.hpp"
#include <string> 
#include <iostream>

Bike::Bike(std::string bikeName): name(nikeName){
    
}
void setBikeName(std::string bName){
    name = bikeName;
}
std::string getBikeName(){
    return bikeName;
}
void setBikeSpeed(double bSpeed){
    speed = bSpeed;
}
double getBikeSpeee(){
    return speed;
}
void changeBikeCadence(int newCadence){
    cadence = newCadence;
    std::cout << getBikeName() "'s cadence is now " << getBikeCadence() << "rpm" << std::endl << std::endl;
}
int getBikeCadence(){
    return cadence;
}
void changeBikeCadence(int newPace){
    pace = newPace;
    std::cout << getBikeName() << "'s pace is now " << getBikePace() < std::endl << std::endl;
}
int getBikePace(){
    return pace;
}
void displayBikeInfo(){
    std::cout << "Bike's name: " << getBikeName() << std::endl
              << "Speed: " << getBikeSpeed() << std::endl
              << "Cadence: " << getBikeCadence() << std::endl
              << "Pace: " << getBikePace() << std::endl << std::endl;
}
