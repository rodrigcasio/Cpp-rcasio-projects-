#include "h_HybridCarDiamondMultiInheEx.hpp"
#include <iostream>

int main(){

	HybridCar hybrid1; 		//constructor of hybrid class, which will also create subobjects of derived classes and base classes 
	hybrid1.drive();

	return 0;
}

/*
	When an object of a derived class is created, subobjects of the base class are also created. 
In our example, when we created an object of type ThirdDerivedClass (ThirdDerivedClass tdc;), 
subobjects of SecondDerivedClass and FirstDerivedClass were also created, 
which themselves created two subobjects of BaseClass.

When someMethod() (a member of BaseClass) was called by an object of ThirdDerivedClass,
it was unclear which one of the two BaseClass subobjects to use to call someMethod().

1. We can correct this problem by explicitly specifying which BaseClass subobject to use by using the scope resolution operator (::) like so:

2. Using virtual in this way ensures only one BaseClass subobject is created and is shared among FirstDerivedClass and SecondDerivedClass. 
We are required to use virtual in both derived classes, or else we will get ambiguity errors again.

how to compile: 

g++ mainDiamondMultiInheEx.cpp fns_VehicleDiamondMultiInheEx.cpp fns_CarDiamondMultiInheEx.cpp 
fns_TruckDiamondMultipleInheEx.cpp fns_HybridCarDiamondMultiInheEx.cpp 

*/