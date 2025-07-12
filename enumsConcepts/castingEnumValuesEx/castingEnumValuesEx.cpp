#include <iostream>
#include "h_CastingEnumValuesEx.hpp"

// Example of casting enum values with using static_cast

// 1. Assigning an integer the value of the enum constant value 
    // ex: static_cast<int>(code), converts StatusCode::NOT_FOUND into its corresponding integer value which is 404.


// 2. Assigning an  converting the integer value to the enum value 
    // ex: static_cast<StatusCode>(userInput), converts the integer value of 403 to the enum value StatusCode::FORBIDDEN.

int main(){

    StatusCode code = StatusCode::NOT_FOUND;
    int userInput = 403; // value of FORBIDDEN

    // 1.
    int codeValue = static_cast<int>(code);
    std::cout << "The integer value of Status Code NOT_FOUND is: " << codeValue << std::endl;

    // 2.
    StatusCode userCode = static_cast<StatusCode>(userInput);

    if(userCode == StatusCode::FORBIDDEN){
        std::cout << "The value of FORBIDDEN is: 403 <--- (this is a whole string, printed if true)" << std::endl;
    }else{
        std::cout << "Conversion unsuccessfully applied" << std::endl;
    }

    return 0;
}