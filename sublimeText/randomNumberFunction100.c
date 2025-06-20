#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//creating a function. of a random number with a limit.
int getRandomNumber(int);
//char upperCaseWord(char);

int main(){

	srand(time(NULL));

	//declaring variables.
	int number, maxNumber = 100;
	char letter = 'r';

	//using the function.
	number = getRandomNumber(maxNumber);
	printf("The random number is: %d\n", number);
	//changing the letter to upper letter.
	letter = toupper(letter);
	printf("%c\n", letter);

	//using the function.
	return 0;
}

//1. defining the function.
int getRandomNumber(int a){
	int randomNumber = rand() % a + 1;
	return(randomNumber);
}


