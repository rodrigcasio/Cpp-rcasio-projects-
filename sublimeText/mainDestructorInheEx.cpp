#include <iostream>

class Device1{
public:
	~Device1(){
		std::cout <<"Device 1 destructor called (this is base class destructor)"<< std::endl;
	}
};

class Device2 : public Device1{
public:
	~Device2(){
		std::cout <<"Device 2 destructor called (derived class destructor)"<< std::endl;
	}
};

class Device3 : public Device2{
public:
	~Device3(){
		std::cout <<"Device 3 destructor called (derived again class destructor)" <<std::endl;
	}
};

int main(){
	//using destructor from Device3 class... consecuentially will call the rest of the destructors..
	Device3 d3;

	return 0;
}