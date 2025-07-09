#include <iostream>
// This is an example if using the constants insdie if-else conditions 
enum TrafficLightColor {
    TRAFFIC_RED,
    TRAFFIC_YELLOW,
    TRAFFIC_GREEN
};

int main(){

    TrafficLightColor myColor = TRAFFIC_RED;

    if(myColor == TRAFFIC_RED){
        std::cout << "Light is red, stop!" << std::endl;
    }else if(myColor == TRAFFIC_YELLOW){
        std::cout << "Light is yellow, start slowing down!" << std::endl;
    }else if(myColor == TRAFFIC_GREEN){
        std::cout << "Light is green, go on" << std::endl;
    }else{
        std::cout << "no enough info from the context" << std::endl;
    }

    return 0;
}