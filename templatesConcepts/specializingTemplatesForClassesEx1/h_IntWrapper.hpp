#include "h_Wrapper.hpp"
#include <iostream>
// specialized class for type integer

template <>
class Wrapper<int> {
    private:
    int var;

    public:
    Wrapper(int value) : var(value){}

    void printValue() const{
        std::cout << "VALUE: " << getValue() << std::endl;
    }
    int getValue() const{
        return var;
    }
    void nextInt(){
        std::cout << "The net greatest integer of " << getValue() << " is " << getValue() + 1 << std::endl;
    }
    
};
