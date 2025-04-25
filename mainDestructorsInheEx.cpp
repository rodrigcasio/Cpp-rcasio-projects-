#include <iostream>

class Device1 {
public:
  ~Device1(){
    std::cout <<"Device 1 destructor called" << std::endl;
  }
};

class Device2 : public Device1{
public:
  ~Device2(){
    std::cout <<"Device 2 destructor called"<< std::endl;
  }
};

class Device3 : public Device2{
public:
  ~Device3(){
    std::cout <<"Device 3 destructor is called" << std::endl;
  }
};

int main(){
  
  //using the destructor from Device3 class... consecuentially with call the rest of the destructors since the classes are derived from the base class..
  Device3 d3;
  return 0;
}

//this will print: with this exact order: 
// Device 3 destructor is called (derived again class destructor)
// Device 2 destructor is called (derived class destructor )
// Device 1 destructor is called  (base class destructor) base class must be on top of the file

