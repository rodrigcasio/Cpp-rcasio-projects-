#include <iostream>
#include "hOverloading.hpp"
/*
This is an example of overloading a function, 
using the same name of the function, but it is asking for different 
arguments, since it has different parameters.

In a process known as function overloading, you can give multiple C++
Preview: Docs Loading link description
functions the same name. Just make sure at least one of these conditions is true:

    *Each has different type parameters.
    *Each has a different number of parameters.

*/

//fun decl are in hOverloading.hpp

int main(){
  std::cout << fancy_number(1, 4) <<"\n";
  std::cout << fancy_number(30, 20, 70) <<"\n";
  std::cout << fancy_number(3.53, 89.2) <<"\n";
}

//fun def are in fnsOverloading.cpp
