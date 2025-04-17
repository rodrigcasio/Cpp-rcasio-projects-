#include <string>
#include <iostream>

class Car{
private:
  int speed;

public:
  //constructor:
  Car(int initialSpeed);

  //method getter:
  int getSpeed();
  //method setter:
  int setSpeed(int carSpeed);

  //*this method in different header file*
  //void isValid(int code, int speed);
};
