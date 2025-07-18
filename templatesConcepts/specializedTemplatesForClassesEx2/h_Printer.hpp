#include <iostream>

template<typename T>
class Printer{
    private:
    T value;

    public:
    Printer(T mValue) : value(mValue){}

    void print(){
        std::cout << "Generic value: " << getValue() << std::endl;
    }
    const T getValue() const{
        return value;
    }
};
