#include <stdio.h>
#include <stdlib.h>


int leapYear(int);

int main(){

	int year;

	printf("Give me a year to check if it is a leap year or not: ");
	scanf("%d", &year);

	if(leapYear(year)){
		printf("This is a leap year!\n");
	}
	else{
		printf("Not a leap year!\n");
	}

}

bool is_leap_year(int a){
	if(a % 4 != 0){
		return false;
	}
	else if(a % 100 != 0){
		return true;
	}
	else if(a % 400 != 0){
		return false;
	}
	else{
		return true; // if you are here, it means that it is divisible
		// by 4, divisible by 100 and divisible by 400. rulling out all the conditions.
	}
}