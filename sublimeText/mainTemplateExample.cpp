#include <iostream>
#include "hTemplateExample.hpp"

//fun decl found in "hTemplateExample.hpp" with decl:
//int get_smallest(int num1, int num2);
//double get_smallest(double num1, double num2);

int main(){

	std::cout << get_smallest(50, 2000) <<"\n";
	std::cout << get_smallest(3.234, 40.2) <<"\n";

	return 0;
}

/*
This is an example of using templates for functions that have 
the same body, but we want o be able to return different types 
of return values. instead of overloading. this only applies when
the body is the same:

here were the original functions declared, and they were placed on a
fnsTemplateExample.cpp: 

int get_smallest(int num1, int num2){
	return num2 > num1? num2 : num1;
}

double get_smallest(double num1, double num2){
	return num2 > num1? num2 : num1;
}

on the header file we add a template:
template <typename T> 

and we change the return types the body of the patameters,
so it can accept int and doubles and we add the definition in the header
and erased everything on the fnsTemplateExample.cpp file, not 
neccesary anymore:

----- hTemplateExample.hpp -----

template <typename T>

T get_smallest(T num1, T num2){
	return num2 > num1? num2 : num1;
}

*/