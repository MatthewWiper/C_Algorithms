#include <stdio.h>
#include "primeFactorization.h"

void primeFactorization(unsigned long numberToFactor){
	int i;
	for(i=2;i<=numberToFactor;i++){
		while(numberToFactor % i == 0){
			printf("%lu ", i);
			numberToFactor /= i;
		}
	}
}
