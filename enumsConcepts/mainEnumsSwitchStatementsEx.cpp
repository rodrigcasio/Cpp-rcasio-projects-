#include <iostream>
#include "h_EnumsSwitchStatementsEx.hpp"

int main(){

    Shape myCircle = Shape::CIRCLE;
    Shape myTriangle = Shape::TRIANGLE;

    printShapeMessage(myCircle);
    printShapeMessage(myTriangle);

    return 0;
}