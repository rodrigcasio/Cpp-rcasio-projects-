#include <stdio.h>
#include <math.h>

double logWithBase(int, int);

int main(){

	int numberBase, number; double result;

	printf("Enter the base of the logarithm\n");
	scanf("%d", &numberBase);
	printf("Enter the number which you want to get it's logarithm\n");
	scanf("%d", &number);

	result = logWithBase(number, numberBase);
	printf("The log base %d of %d is: %.2f", numberBase, number, result);

	return 0;
}

double logWithBase(int a, int b){



	return(log(a)/log(b)); //log(number)/log(base)
}