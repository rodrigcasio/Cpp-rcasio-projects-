#include <iostream>

class Computer{
  public:
    Computer(std::string cName, int cRam, double cSpeed);
    void turnOn();
    void addRam(int extraRam);
    void printSpecs();

  private:
    std::string name;
    int ram;
    double speed;
};
