#include "h_JuiceVirtualDestructorEx.hpp"
#include "h_AppleJuiceVirtualDestructorEx.hpp"
#include "h_OrangeJuiceVirtualDestructorEx.hpp"
#include <iostream>

int main(){

  Juice* myOrangeJuice = new OrangeJuice(390, true);
  Juice* myAppleJuice = new AppleJuice(320, "green");

  delete myOrangeJuice;
  delete myAppleJuice;
  
  return 0;
}

/* 
how to run:
g++ mainVirtualDestructorEx.cpp fns_JuiceVirtualDestructorEx.cpp fns_AppleJuiceVirtualDestructorEx.cpp fns_OrangeJuiceVirtualDestructorEx.cpp
rodcasio@Rodrigos-MacBook-Air sublimeText % ./a.out
*/
