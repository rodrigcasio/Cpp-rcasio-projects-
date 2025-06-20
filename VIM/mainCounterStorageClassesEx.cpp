#include <iostream>
#include "h_CounterStorageClassesEx.hpp"

int main(){
    
    //demonstrating static counter (persist across function call)
    std::cout <<"Demonstrating static counter:" << std::endl;
    incrementStaticCounter();
    incrementStaticCounter();

    //Demonstrating auto counter (created fresh each time it's called)
    std::cout << "Demonstrating auto counter:" << std::endl;
    incrementAutoCounter();
    incrementAutoCounter();

    //Demonstrating extern counter (shared value across files)
    externCounter = 100;
    std::cout << "Demonstrating extern counter:" << std::endl;
    std::cout << "Extern counter value: " << externCounter << std::endl;
    
    return 0;
}
