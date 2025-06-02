#include <iostream>
#include <memory>

int main(){

  //1. creating a smart shared pointers:
  std::shared_ptr<int> ptr1 = std::make_shared<int>(7);
  std::shared_ptr<int> ptr2 = ptr1;
  std::shared_ptr<int> ptr3 = ptr1;

  std::cout << ptr.use_count() << std::endl;               //shows the number of shared pointing to the same resource outputs 3

    //deleting one of them with reset() method:
  ptr3.reset();

  std::cout << ptr.use_count() << std::endl;      //outputs 2 

  // ==== 2nd example:

  std::shared_ptr<int> firstPtr = std::make_shared<int>(300);
  std::shared_ptr<int> secondPtr = firstPtr;

  std::cout << "firstPtr value pointing to: " << *firstPtr << " -Address of the pointer variable: " << &firstPtr << std::endl;      // output same value for both shared pointers = 300
  std::cout << "secondPtr value pointing to: "<< *secondPtr << " -Address of the pointer variable: " << &secondPtr << std::endl;    // outputs the address of each pointer variable.

  // outputs the same addressof the integer variable on the heap, which both pointers manage, using the method get() 
  std::cout << "firstPtr address of the integer it points to ----> " << firstPtr.get() << std::endl
            << "secondPtr address of the integer it points to ----> " << secondPtr.get() << std::endl << std::endl            //should print same 


  return 0;
}
