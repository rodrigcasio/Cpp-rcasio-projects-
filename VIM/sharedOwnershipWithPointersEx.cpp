#include <iostream>
#include <memory>
 
int main(){
 
    // ==== 1st example:  Removing ownerships of shareed_ptr's sharing the same allocated integer on the heap.

    std::shared_ptr<int> ptr = std::make_shared<int>(77);
    std::shared_ptr<int> ptr2 = ptr;
    std::shared_ptr<int> ptr3 = ptr;
                                                     //  use_count shows how many shared pointers share the same ownership of ptr.
    std::cout << "-total # of pointer's owning \"ptr\" same resource (including ptr): " <<  ptr.use_count() << std::endl;          // outputs 3
                                                       // we can destroy a shared pointer by using the reset() method
    
                    // reset()                  
    ptr3.reset();   // removes the ownership of the integer 
                    // it is not pointing to any resource on the heap
                    // ptr3 becomes an empty pointer, but
                    // the variable pointer still alocated on the stack


    std::cout << "\t--\"ptr3\" ownership gets removed" << std::endl;

    std::cout << "-total # of pointer's owning \"ptr\" same resource (including ptr): " << ptr.use_count() << std::endl;          // outputs 2 (we deleted the shared ptr3 with reset()
    
    ptr.reset();        // removing "ptr" ownership

    std::cout << "\t--\"ptr\" ownership gets removed" << std::endl << std::endl;

    // after removing ownership of the integer from ptr3 and ptr 
    // ptr2 is the only pointer left that holds ownership of the integer allocated on the heap
    
    std::cout << "-total # of pointer's owning \"ptr2\" same resource (including ptr2): " << ptr2.use_count() << std::endl;
    std::cout << "-Resource owned by \"ptr2\": " << *ptr2 << std::endl;

    std::cout << "\t--------" << std::endl << std::endl;

    // === another example:             Outputing the address of the integer variable allocated on the heap, by using the get() method on the pointers  which own the resource.
    
    std::shared_ptr<int> firstPtr = std::make_shared<int>(100);
    std::shared_ptr<int> secondPtr = firstPtr;

    std::cout << "FirstPtr value pointing to: " << *firstPtr << " -Address of the smart pointer variable: " << &firstPtr <<  std::endl 
              << "SecondPtr value pointing to: " << *secondPtr << " -Address of the smart pointer variable: "<< &secondPtr << std::endl << std::endl;
    
    // outputs the same address of the integer variable on the heap, which both pointers manage:
    std::cout << "firstPtr address of the integer it points to --> " << firstPtr.get() << std::endl 
              << "secondPtr address of the integer it points to --> " << secondPtr.get() << std::endl << std::endl;
    return 0;
}
