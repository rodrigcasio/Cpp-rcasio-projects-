#include <stdio.h>

//func prototype 
void f(int*);

int main(){
	int a = 1;
	int *p = &a;
	f(p);
	printf("before *p = 5: %d\n", *p);
	*p = 5;
	printf("after *p = 5: %d\n", *p);

}

//fun dec
void f(int* x){
	int b = 2;
	x = &b;
	printf("%d \n", *x);
}

/*

In this code, the function f takes a pointer as an argument but changes the pointer x to point to a local variable b. 
This means that when f prints *x, it outputs the value of b, which is 2. 
However, the pointer in main remains unchanged and still points to a, which is 1, resulting in the final output of 2 1. 
Understanding pointer behavior in terms of value and address is crucial here.


Think of p as a treasure map:


    p is the map itself (the address, 0x100).
    *p is the treasure at the spot marked on the map (the value, 1).
    f(int* x) wants the map (p), not the treasure (*p), 
    so it can go find or change the treasure itself.




*/

