#include "h_Result.hpp"
#include <iostream>

// 1st example of Underlying types for enums
// here in the header file we are assigning the value of the constants as bool in the declaration of the enum class

int main(){

    // creating a variable of type Result
    Result outcome = Result::PASS;

    // 2. getting the size of the variable
    std::cout << "Size of outcome: " << sizeof(outcome) << " byte(s)" << std::endl;
    
    // 3. assigning to a boolean varible, the value of the outcome, which is the constant PASS
    bool boolValue = static_cast<bool>(outcome);

    if(boolValue){
        std::cout << "The result enum constant value of \"outcome\" is PASS" << std::endl;
    }else{
        std::cout << "The result enum constant value of \"outcome\" is FAIL " << std::endl;
    }

    return 0;
}