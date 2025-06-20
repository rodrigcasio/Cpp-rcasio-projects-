#include "h_CacheReadOnlyFunctionEx.hpp"
#include <iostream>

bool Cache::getIsValid(){
    return valid;
}
void Cache::isValid() const{
    if(valid){
        std::cout << "Cache is valid!" << std::endl;
    }else{
        std::cout << "Cache is invalid!" << std::endl;
    }
}
