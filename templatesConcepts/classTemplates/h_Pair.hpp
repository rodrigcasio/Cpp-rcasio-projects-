#include <string>
#include <iostream>

// class template methods must be defined in the same file as the header 

template<typename T, typename U>
class Pair {
    private:
    T element1;
    U element2;

    public:
    Pair(T e1, U e2): element1(e1), element2(e2){}

    void displayPair(){
        std::cout << "element 1 :" << element1 << ", element 2: " << element2 << std::endl;
    }

};
