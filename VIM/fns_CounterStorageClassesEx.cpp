#include "h_CounterStorageClassesEx.hpp"
#include <iostream>
//func defin

//definition of extern variable
int externCounter = 0;

//Static counter func
void incrementStaticCounter(){
    static int staticCounter = 0;
    staticCounter++;
        std::cout << "Static counter: " << staticCounter << std::endl;
}
// Auto counter function
void incrementAutoCounter(){
    auto autoCounter = 10;
    std::cout << "Auto counter: " << autoCounter << std::endl;
}
