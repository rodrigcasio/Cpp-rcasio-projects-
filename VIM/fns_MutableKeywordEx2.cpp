#include "h_MutableKeywordEx2.hpp"
#include <iostream>

void Cache::isValid() const{
    std::cout << "Cache is "<< (valid ? "valid!" : "not valid!") << std::endl;
    if(!valid){          //changing value.
        valid = true;
    }
}

