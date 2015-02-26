#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int i, k, j, ii, kk, space, numberOfRows;
	
	printf("Enter the number of rows: ");
	scanf("%d", &numberOfRows);
	
	printf("\n");
	for (i=0;i<numberOfRows;i++)
	{
		for(k=0;k<=i; k=k+1)
			printf("x");
					
		printf("\n");
		
	}
	for(ii=numberOfRows; ii>=0;ii--)
	{
		for(kk=ii;kk>=0;kk--)
			printf("x");
			
			printf("\n");
	}
	printf("Press any key to contiune...\n");
	getch();	
	return 0;
}
