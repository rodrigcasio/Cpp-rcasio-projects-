#include <iostream>
#include "h_Functions.hpp"
#include "h_DataHolder.hpp"

// Custom Toolkit for robotics lab using C++ templates

void runToolKitDemo(){
    std::cout << "\t=== ToolKit Demo ===" << std::endl;
    int result = midPoint(1000, 3000);  // 25.
    std::cout << "The mid point of 1000 - 3000 is: " << result << std::endl;

std::cout << "----" << std::endl;

    std::string part1 = "alpha";
    std::string part2 = "engine";
    swapValues(part1, part2);   // 26.
    std::cout << "\"part1\" new value is: " << part1 << std::endl
              << "\"part2\" new value is: " << part2 << std::endl;
    
std::cout << "----" << std::endl;

    DataHolder<double> specialNumber(3.90, 1.58, 8.92); // 27.
    std::cout << "The special number value is: " << specialNumber.getValue() << std::endl;

std::cout << "----" << std::endl;

    DataHolder<std::string> robotName("CASIONATOR THE DESTROYER");  // 28.
    std::cout << "The name of the robot is: " << robotName.getValue() << std::endl;

std::cout << "\t=== End of ToolKit Demo ===" << std::endl;
}   

int main(){

    int result = midPoint(20, 40);  // 2.
    std::cout << "Result (int): " << result << std::endl;

    double result2 = midPoint(2.77, 3.193); // 3.
    std::cout << "Result (double): " << result2 << std::endl;   

std::cout << "---" << std::endl;

    int firstNumber = 7;    // 5.
    int secondNumber = 18;

    swapValues(firstNumber, secondNumber);  // 6.
    std::cout << "\"firstNumber\" new value: " << firstNumber << std::endl;
    std::cout << "\"secondNumber\" new value: " << secondNumber << std::endl;   // 6.

std::cout << "---" << std::endl;
    // now with strings
    std::string greeting = "hello"; // 7.
    std::string planet = "world";

    swapValues(greeting, planet);
    std::cout << "\"greeting\" new value: " << greeting << std::endl;
    std::cout << "\"planet\" new value: " << planet << std::endl;

std::cout << "---" << std::endl;

    DataHolder<int> testNumber(21, 0, 100); // 17.
    std::cout << "Current value from first test is " << testNumber.getValue() << std::endl;
    testNumber.setValue(78);    // 18.
    std::cout << "New value: " << testNumber.getValue() << std::endl;
    testNumber.setValue(1042);  // 19.
    std::cout << "Current value is: " << testNumber.getValue() << std::endl;

std::cout << "---" << std::endl;

    DataHolder<std::string> testString("robotics lab"); // 24.
    std::cout << "The current value of the string stored is: " << testString.getValue() << std::endl;   

std::cout << "---" << std::endl;

    runToolKitDemo();   // demo
    return 0;
}
