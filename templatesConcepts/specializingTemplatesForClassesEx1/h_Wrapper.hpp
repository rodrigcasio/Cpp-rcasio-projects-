#include <iostream>

template<typename T>
class Wrapper{
    private:
        T var;

    public:
        Wrapper(T value): var(value){}
        void printValue() const{
            std::cout << "VALUE: " << getValue() << std::endl;
        }
        T getValue() const{
            return var;
        }
};
