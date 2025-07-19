#include <iostream>
#include <string>

template<typename T>    // 1.
T midPoint(T a, T b){
    return a + (b - a) / 2;
}

template <typename T>   // 4.
void swapValues(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

