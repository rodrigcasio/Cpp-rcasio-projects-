#include <iostream>
#include <string>

template<typename T>    // 8.
class DataHolder {
    private:    // 9.
    T storedValue;
    T maxValue;
    T minValue;

    public:
    DataHolder(T val, T min, T max) : maxValue(max), minValue(min){ // 10.
        if(val >= min && val <= max){
            storedValue = val;  // 11.
        }else if(val > max){    
            storedValue = max;  // 12.
            std::cout << "WARNING: " << val << " is too high! Setting value to " << max << "!" << std::endl;
        }else if(val < min){
            storedValue = min;  // 13.
            std::cout << "WARNING: " << val << " is too low! Setting value to " << min << "!" << std::endl;
        }
    }

    void setValue(T newValue){
        if(newValue >= minValue && newValue <= maxValue){
            storedValue = newValue; // 14.
        }else if(newValue > maxValue){  // 15.
            storedValue = maxValue; // 15.1
            std::cout << newValue << " is too high! Setting value to " << maxValue << std::endl;
        }else if(newValue < minValue){
            storedValue = minValue; // 15.2
            std::cout << newValue << " is too low! Setting value to " << minValue << std::endl;
        }
    }

    T getValue() const{ // 16.
        return storedValue;
    }
};

template <> // 20.
class DataHolder<std::string> {
    private:
    std::string storedValue;

    public:
    DataHolder(std::string val) : storedValue(val){}    // 21.
    
    void setValue(std::string newValue){    // 22.
        storedValue = newValue;
    }
    std::string getValue() const {  // 23.
        return storedValue;
    }
    
};