#include <iostream>
#include "h_CacheReadOnlyFunctionEx.hpp"

//example of using a read-only function from a class
int main(){
    
    Cache cache1;
    cache1.isValid();             //read-only function isValid() const;
    
    //will print is invalid!

    return 0;
}
