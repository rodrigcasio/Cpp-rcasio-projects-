//function exercise. 
#include <stdio.h>

//function Prototypes
void myFunction(int);
void myFunction2(int*);
void myFunction3(int*);


//MAIN
int main(){

	int i = 10; 
	myFunction(i); //first calling the function.
	printf("\"a\" in main(): %d\n", i); //second printing the value of i.

	printf("\t------space-----\n");

	//function with pointer.
	int j = 10;
	int *ptr1 = &j;
	myFunction2(ptr1); //first, calling the function
	printf("\"j\" in main(): %d\n", j); // second, printing the value of j.

	printf("\t-----space------\n");

	//function with changing the value of a variable with a pointer.
	int age = 25;
	int *ptrAge = &age;
	myFunction3(ptrAge);
	printf("my \"age\" after calling the function with the use of a pointer\nwhich changes the value inside the fucntion3 is: %d\n", age);


	return 0;
}


//functions def. 
void myFunction(int a){
	a = a + 2;
	printf("\"a\" inside myFunction: %d\n", a);
}
//fucntion def. for pointer.
void myFunction2(int* a){
	*a = *a + 2;
	printf("\"a2\" inside myFunction2(): %d\n", *a);
}
//function def. changing the value of a variable with pointer.
void myFunction3(int* agePointer){
	*agePointer = *agePointer + 1;
}
