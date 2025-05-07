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
void setBikeCadence(int bCadence){
    cadence = bCadence;
}
int getBikeCadence(){
    return cadence;
}
void setBikePace(int bPace){
    pace = bPace;
}
int getBikePace(){
    return pace;
}
void displayBikeInfo(){
  std::string << getBikeName() << " is going at " << getBikeSpeed() << " km/h" << std:endl 
              << " with a cadence of " << getBikeCadence() <<  " rpm and a pace of " << getBikePace() << std::endl;  
}
