#include <iostream>

// 1.
template<typename T>
T getMax(T value1, T value2){
    if(value1 > value2) return value1;
    return value2;
}

// 2.
template<typename T, typename U>    // two numbers regardless of their type
bool areNumbersEqual(T num1, U num2){
    return num1 == num2;
}

int main(){
    // 1.
    int result1 = getMax(5, 10);
    double result2 = getMax(3.2, 7.9);
    std::cout << "The maximum number is: " << result1 << std::endl;
    std::cout << "The maximum number is: " << result2 << std::endl;
  
    // 2.
    bool result3 = areNumbersEqual(4, 3.8);


    return 0;
}