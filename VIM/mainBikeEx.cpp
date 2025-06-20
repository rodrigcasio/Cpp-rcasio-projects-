#include <iostream>
#include "h_BikeEx.hpp"

int main(){
    
    Bike myBike("Mqueen", 30, 80, 15);
    
    //diplay bike information:
    myBike.displayBikeInfo();
    
    //changing the cadence of myBike
    myBike.changeBikeCadence(90);

    //changing the pace of myBike
    myBike.changeBikePace(10);

    //displaying the information with new changes
    myBike.displayBikeInfo();

    return 0;
}
