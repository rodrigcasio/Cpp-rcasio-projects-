#include <iostream>

// Example of a dangling pointer, we avoid dereferencing dangling pointers
// by setting them "nullptr" after their deleting them.

int main(){

  int* ptr1 = new int(77);      // raw pointer dynamically allocated in the heap

  std::cout << "address of the int variable: (ptr1)" << ptr1 << std::endl
            << "address of the pointer variable: (&ptr1)" << &ptr1 << std::endl
            << "the value of the integer getting pointed: (*ptr1)" << *ptr1 << std::endl;

  delete ptr1;

  ptr1 = nullptr;

  // Checking if the pointer is a "nullptr"
  if(ptr1 != nullptr){
    std::cout << *ptr1 << std::endl
  }else{
    std::cout << "\t\"ptr1\" is a nullptr!, safe from dangling pointer issue" << std::endl;
  }
  
  return 0;
}
