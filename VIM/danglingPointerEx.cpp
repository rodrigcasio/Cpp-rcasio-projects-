#include <iostream>

// Example of a dangling pointer, we avoid dereferencing dangling pointers
// by setting them "nullptr" after deleting them.

#if __cplusplus <= 201103L
namespace std {
    template <typename T, typename... Args>
    std::unique_ptr<T> make_unique(Args&&... args) {
        return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
    }
}
#endif

int main(){
    
    int* ptr1 = new int(77);      // Raw pointer
    std::unique_ptr<int> ptr2 = std::make_unique<int>(30);
    
    
    std::cout << "address of the int variable: (ptr1) " << ptr1 <<std::endl 
              << "address of the ptr variable: (&ptr) "<< &ptr1 << std::endl 
              << "the value of the integer getting pointed: (*ptr1) "<< *ptr1 << std::endl;
    
    std::cout << "The address of the integer object on the heap: (ptr2) " << ptr2 << std::endl;
    std::cout << "The address of the smart_ptr variable itsef: (ptr2) " << &ptr2 << std::endl;   


    delete ptr1;                
    
    ptr1 = nullptr;
    std::cout << ptr1 << std::endl;    // prints 0x0 as the address of a nullptr

    // checking if the pointer is a "nullptr"
    if(ptr1 != nullptr){
        std::cout << *ptr1 << std::endl;
    }else{
        std::cout << "\t\"ptr1\" is a nullptr!, safe from dangling pointer issue" << std::endl;
    }
    
    return 0;
}
