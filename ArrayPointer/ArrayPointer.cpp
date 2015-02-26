#include <stdio.h>
#include <stdlib.h>

/* Program to demonstrate relationship between pointers and arrays 
   Point a pointer at 0 index of array (memory location) and then loop through all pointers in allocated array block.*/

	int main()
		{
		// Initialize Array. Populate index with elements  
		int testArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		//Create a pointer to point at adress of first index
		int *p_testArraySum = &testArray[0];
		int index;
		int sum = 0;
		
		for (index = 0; index <=9; index++){
			// Pointer addition. Can add pointers. Use this to sum elements of array. 
			// Pull value from pointer memory location. 
			// Because data type = int, memory address increases by 4 bits for each index. 
			sum = sum + *(p_testArraySum + index);
			// printf("%d\n", sum);
			}

		printf("The sum of all the elements in the array is: %d\n", sum);
	//	printf("%d\n", *(p_testArraySum + 3));  This pulls specific element out of array index.
		printf("\n");
		printf("Press enter key to continue...");

		getchar();
		}
	