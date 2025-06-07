#include <iostream>
#include <memory>

int main(){

  // ===== 1st example:   Removing ownerships of shared_ptr's sharing the same allocated integer on the heap.
  
  std::shared_ptr<int> ptr1 = std::make_shared<int>(7);
  std::shared_ptr<int> ptr2 = ptr1;
  std::shared_ptr<int> ptr3 = ptr1;

  std::cout << "-total # of pointers owning \"ptr\" same resource (including ptr): " << ptr.use_count() << std::endl;               //shows the number of shared pointing to the same resource outputs 3

  ptr3.reset();     // reset()
                    // removes ownership of the integer variable on the heap.
                    // It is not pointing to any resource on the heap.
                    // ptr3 becomes an empty pointer, but the variable
                    // pointer is still allocated on the stack
  std::cout << "\t--\"ptr3\" ownership gets removed" << std::endl;
  
  std::cout << "-total # of pointers owning \"ptr\" same resource (including ptr): " << ptr.use_count() << std::endl;       // outputs 2

  ptr.reset();         // removing "ptr" ownership 
  
  std::cout << "\t--\"ptr\" ownership gets removed" << std::endl << std::endl;
  
  // ptr2 is the last pointer that owns the variable integer (7) 
  std::cout << "-total # of pointers owning \"ptr2\" same resource (including ptr2): " << ptr2.use_count() << std::endl;      // output 1
  std::cout << "-Resource owned by \"ptr2\": " << *ptr2 << std::endl;

  std::cout << "\t------" << std::endl << std::endl; 

  // ==== 2nd example:       outputing the address of the integer variable allocated on the heap, by using get() on the pointers which own the resource.

  std::shared_ptr<int> firstPtr = std::make_shared<int>(300);
  std::shared_ptr<int> secondPtr = firstPtr;

  std::cout << "firstPtr value pointing to: " << *firstPtr << " -Address of the pointer variable: " << &firstPtr << std::endl;      // output same value for both shared pointers = 300
  std::cout << "secondPtr value pointing to: "<< *secondPtr << " -Address of the pointer variable: " << &secondPtr << std::endl;    // outputs the address of each pointer variable.

  // outputs the same addressof the integer variable on the heap, which both pointers manage, using the method get() 
  std::cout << "firstPtr address of the integer it points to ----> " << firstPtr.get() << std::endl
            << "secondPtr address of the integer it points to ----> " << secondPtr.get() << std::endl << std::endl            //should print same 


  return 0;
}
