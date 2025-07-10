#include "h_EnumsSwitchStatementsEx.hpp"

void printShapeMessage(Shape shape){
   switch(shape){
    case Shape::CIRCLE:
        std::cout << "This is a circle!" << std::endl;
        break;
    case Shape::SQUARE:
        std::cout << "This is a square!" << std::endl;
        break;
    case Shape::TRIANGLE:
        std::cout << "This is a triangle!" << std::endl;
        break;
    default:
        std::cout << "Unknown Shape!" << std::endl;
   }
}
