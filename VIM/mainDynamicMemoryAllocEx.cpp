#include <iostream>

// This is an example of requesting memory from the heap during runtime.

int main(){

    //dynamically allocating an integer:
    int* newInt = new int(49);

    //we use dereference operator:
    std::cout << *newInt << std::endl;

    //properly deallocating the memory for the integer:
    delete newInt;

    return 0;
}
