#include <iostream>
#include "h_KeyValuePair.hpp"

int main(){

    KeyValuePair key1(1001, "Bathroom Key");

    int keyNumber = key1.getKey();
    std::string keyValue = key1.getValue();

    std::cout << "Key: #" << keyNumber << std::endl;
    std::cout << "Value :" << keyValue << std::endl;

    return 0;
}
