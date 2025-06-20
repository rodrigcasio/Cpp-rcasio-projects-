#include <iostream>
#include <memory>

int main(){
 
    // ==== Example of removing ownership of a shared_ptr with reset()

    std::shared_ptr<int> num1 = std::make_shared<int>(20);
    std::shared_ptr<int> num2 = num1;

    std::shared_ptr<int> sharedPtrA = std::make_shared<int>(400);
    std::shared_ptr<int> sharedPtrB = sharedPtrA;

    sharedPtrA.reset();         // sharedPtrA removed ownership of allocated integer on the heap
    
    std::cout <<"\t--\"sharedPtrA\" ownership removed--" << std::endl << std::endl;
    
    *sharedPtrB = 7;        // changing the value of the variable allocated on the heap, using dereference operator
    
    std::cout << "-Resource owned by \"sharedPtrB\": " << *sharedPtrB << std::endl;
 

    // ==== Example of transferring ownership from one unique_ptr to another
    //      using std::move()

    std::unique_ptr<int> uniquePtrA = std::make_unique<int>(25);
    std::unique_ptr<int> uniquePtrB = std::move(uniquePtrA); //transferring ownership to uniquePtrB

    std::cout << "\t-- pointer \"uniquePtrA\" transfers ownership to \"uniquePtrB\"-- " << std::endl << std::endl; 

    std::cout << "-Resource transferred from \"uniquePtrA\" to \"uniquePtrB\": " << *uniquePtrB << std::endl;


    return 0;
}
