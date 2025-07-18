#include <iostream>
#include <string>

template<typename T>
void logData(T data){
    std::cout << "DATA: " << data << std::endl;
}

// customizing a the template for integer
template <>
void logData<int>(int data){
    std::cout << "INT (binary representation): ";
    for(int i = 15; i >= 0; --i){
        std::cout << ((data >> i ) & i);
    }
    std::cout << std::endl;
}

// customizing the template for std::string
template <>
void logData<std::string>(std::string data){
    std::cout << "STRING \"" << data << "\"" << std::endl;
}

int main(){

    logData(4.23);
    logData(42);
    logData("I love pizza");
    return 0;
}
