#include <iostream>

// double deletion of a ptr will cause "undefined behaviour"
// this is an example of making sure we set the pointer to "nullptr"

int main(){
    
    int* ptr1 = new int(49);

    std::cout << "- Address of the integer (ptr1): " << ptr1 << std::endl;
    delete ptr1;

     //ptr1 = nullptr;
    
    if(ptr1 != nullptr){
        ptr1 = nullptr;
        std::cout << "-pointer has been set to \"nullptr\" succesfully" << std::endl;
    }else{
        std::cout << "Memory has been deallocated already" << std::endl;
    }

    return 0;
}
