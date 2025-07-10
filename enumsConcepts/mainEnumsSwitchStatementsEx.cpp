#include <iostream>
#include "h_EnumsSwitchStatementsEx.hpp"

int main(){

    Shape myCircle = Shape::CIRCLE;
    Shape myTriangle = Shape::TRIANGLE;

    printShapeMessage(myCircle);
    printShapeMessage(myTriangle);

    return 0;
}

// How to run : g++ mainEnumsSwitchStatementsEx.cpp fns_EnumsSwitchStatementsEx.cpp 
            // % ./a.out 