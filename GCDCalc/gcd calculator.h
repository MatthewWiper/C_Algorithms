#include <stdio.h>


struct factors {
	int first;
	int second;
	int larger;
	int smaller;	
};

int gcd(int p1, int p2);

int main()
{
	
	int first, second, i;
	
	printf("Compute greatest common divisor\n");
	
	printf("Enter the first integer: \n");
	scanf("%d", &first);
	printf("Enter the second integer: \n");
	scanf("%d", &second);
	
	printf("\n");
	
	
	i = gcd(first, second);
	
	
	printf("The common greatest divisor is: %d", &i);
	
	return 0;
	
}
	int gcd(int p1, int p2)
	{
		int smaller, larger, remainder, k;
		
		if (p2>p1) {
		
		larger = p2;
		smaller = p1;
		}
		else {
			larger = p1;
			smaller = p2;
		}
		
		while (smaller>0){
			remainder = larger % smaller;
			smaller = larger;
			smaller = remainder;
			k = smaller;
		}
		return k;
	}
	
	

