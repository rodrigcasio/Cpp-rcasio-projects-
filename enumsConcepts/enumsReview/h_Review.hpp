#include <cstdint>  // needed for the uint8_t

// declarations: enum, enum class, enum class with underlying type and functions needed

// normal enum 
enum CoffeeSize {
    Small = 1,  // 1 is the underlying integer value stored in the enum constant
    Medium = 2,
    Large = 3
};

enum class TrafficLight{
    RED,
    YELLOW,
    GREEN,
};


enum class BeverageType : uint8_t {
    Coffee = 1,
    Tea = 2,
    Juice = 3
};

void printCoffeeSize(CoffeeSize size);
void printTrafficLight(TrafficLight light);
void printBeverageType(BeverageType type);