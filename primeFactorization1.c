#include <stdio.h>
#include <stdlib.h>

void primeFactorization(unsigned long numberToFactor);

int main(void){
	unsigned long numberToFactor;
	
	printf("Input number to factor: ");
	scanf("%lu", &numberToFactor);
	
	primeFactorization(numberToFactor);
	
	return 0;
}

void primeFactorization(unsigned long numberToFactor){
	int i;
	for(i=2;i<=numberToFactor;i++){
		while(numberToFactor % i == 0){
			printf("%lu ", i);
			numberToFactor /= i;
		}
	}
}
