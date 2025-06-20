#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//first function
int getRandomnumberFunction();

int main(void){
	srand(time(NULL));

	int randomNumber = getRandomnumberFunction();
	printf("My random number is: %d", randomNumber);

}


//defining the function. 
int getRandomnumberFunction(){
	int getRandom1000 = rand() % 1000 + 1; //get a random number from 1 to 1000.
	return(getRandom1000);
}