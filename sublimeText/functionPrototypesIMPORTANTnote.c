// functionPrototypes.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//functionProt
void repeatDigit(int);
int getRandomNumber(int);

//MAIN
int main(){

	srand(time(NULL));
	int repetitions = getRandomNumber(10);
	repeatDigit(repetitions);

	return 0;
}

//function bodies.
void repeatDigit(int aRep){
	int digit = getRandomNumber(9);
	for(int i = 0; i < aRep; i++){
		printf("%d ", digit);
	}
	printf("\n");
}

int getRandomNumber(int bMaxNumber){
	int randomNumber = rand() % bMaxNumber + 1;
	return(randomNumber);
}

