#include <iostream>

// first view of the default value of the constants inside the enums class? 
// Thit file allows to see the default values of the constants inside the enums class.

enum enum1 {
    constant1,
    constant2,
    constant3,
};

int main(){

    std::cout << "- " << constant1 << std::endl 
              << "- " << constant2 << std::endl
              << "- " << constant3 << std::endl;

    return 0;
}
