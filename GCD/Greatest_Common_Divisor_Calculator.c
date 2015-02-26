	#include <stdio.h>
#include <stdlib.h>

int gcd(int p1, int p2);

int main()
{	
	int first, second, i;
	char yesOrNo;
	
	printf("Compute greatest common divisor\n");
	printf("\n");

		do
		{
			printf("Enter the first integer: ");
			scanf("%d", &first);
			printf("Enter the second integer: ");
			scanf("%d", &second);
	
			printf("\n");
	
			i = gcd(first, second);
	
			printf("The common greatest divisor is: %d\n", i);	
		
			printf("Would you like to run program again? (y/n) ");
 			yesOrNo=getch();
 			printf("\n");
 			printf("\n");
		 } 
		while (yesOrNo != 'n');
			getch();	

	printf("Goodbye!\n");
	getch();
	return 0;
}

int gcd(int p1, int p2)
{
	int smaller, larger, remainder, k;
		
	if (p2>p1) 
		{
		
			larger = p2;
			smaller = p1;
		}
	else 
		{
			larger = p1;
			smaller = p2;
		}
		while (smaller!=0)
		{
			remainder = larger % smaller;
			larger = smaller;
			smaller = remainder;
			k = larger;
		}
	return k;
}
	
