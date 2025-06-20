#include <iostream>
#include "h_MutableKeywordEx2.hpp"
//this is the 2nd example of using mutable keyword 
int main(){
    
    Cache cache1;
    cache1.isValid();               //prints cache is invalid!
    
    cache1.isValid();               //print cache is valid!

    return 0; 
}
