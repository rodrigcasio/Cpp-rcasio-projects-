#include <iostream>

template<typename T>
void compare(T value1, T value2){
    if(value1 == value2){
        std::cout << "Values are equal!" << std::endl;
    }else{
        std::cout << "Values are not equal" << std::endl;
    }
}

// customizing template for type data doubles 
template <>
void compare<double>(double value1, double value2){
    if(value1 > value2){
        std::cout << "Value 1 is greater than value 2" << std::endl;
    }else{
        std::cout << "Value 1 is NOT greater than value 2" << std::endl;
    }
}

int main(){

    compare("hello", "hello");
    compare(43, 43);
    compare(1, 1);

    compare(3.21, 3.1);
    compare(3.43, 9.73);
    return 0;
}
