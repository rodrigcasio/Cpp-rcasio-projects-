#include <stdio.h>

// global scope
char* myMessage = "This is my global message!\n";

//func() scope and prototype
void myFunc();


int main(){

	// you can change 'myNumber' to be 
	// larger than '50'
	int myNumber = 39;

	if(myNumber <= 50){
		printf("%d\n", myNumber);
		printf("%s", myMessage); 
	}
	else{
		int myNumber = 500;
		printf("%d", myNumber);
		myFunc();
	}

	return 0;
}

void myFunc(void){
	char* myMessage = "This is my local message!";
	printf("%s", myMessage);
}