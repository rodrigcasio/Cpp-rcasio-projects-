#include <iostream>
#include "h_Functions.hpp"
#include "h_DataHolder.hpp"
// Custom Toolkit for robotics lab 

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

    DataHolder<std::string> testString("robotics lab");
    std::cout << "The current value of the string stored is: " << testString.getValue() << std::endl;

    return 0;
}
