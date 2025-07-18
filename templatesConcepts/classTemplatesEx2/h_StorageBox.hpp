#include <string>
#include <iostream>

template<typename T>
class StorageBox {
    private:
        T storedValue;

    public:
        StorageBox(T inputValue): storedValue(inputValue){}

        T getStoredValue() const { return storedValue; }
};
