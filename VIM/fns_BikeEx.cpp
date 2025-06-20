#include "h_BikeEx.hpp"
#include <iostream>
#include <string>

Bike::Bike(std::string bikeName, double bikeSpeed, int bikeCadence, int bikePace): name(bikeName), speed(bikeSpeed), cadence(bikeCadence), pace(bikePace) {
    
}
void Bike::setBikeName(std::string bName){
    name = bName;
}
std::string Bike::getBikeName(){
    return name;
}
void Bike::setBikeSpeed(double bSpeed){
    speed = bSpeed;
}
double Bike::getBikeSpeed(){
    return speed;
}
void Bike::changeBikeCadence(int newCadence){
    cadence = newCadence;
    std::cout << getBikeName() << "'s cadence is now " << getBikeCadence() << "rpm" << std::endl << std::endl;
}
int Bike::getBikeCadence(){
    return cadence;
}
void Bike::changeBikePace(int newPace){
    pace = newPace;
    std::cout << getBikeName() << "'s pace is now " << getBikePace() << "mph"<< std::endl << std::endl;
}
int Bike::getBikePace(){
    return pace;
}
void Bike::displayBikeInfo(){
    std::cout << "Bike's name: " << getBikeName() << std::endl
              << "Speed: " << getBikeSpeed() << " km/h" << std::endl 
              << "Cadence: " << getBikeCadence() << " rpm" << std::endl 
              << "Pace: " << getBikePace() << " mph" << std::endl << std::endl;

}

