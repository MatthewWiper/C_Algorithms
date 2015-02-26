#include <stdio.h>
#include <stdlib.h>
#include "primeFactorization.h"


int main(void){
	unsigned long numberToFactor;
	
	printf("Input number to factor: ");
	scanf("%lu", &numberToFactor);
	
	primeFactorization(numberToFactor);
	
	return 0;
}
