/* Program to take a requested set of random integers from user and print them to 
   randomIntegers.txt. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	
	// Create pointer for malloc to dynamically size array. 
	int *p_testArray;
	int index = 0;
	int i;
	int arraySize;
	// Allows for file to be open/read from/written to.   
	FILE *fp;

	printf("Enter the amount of random integers you would like to generate: ");
	scanf("%d", &arraySize);
	// Dynamically sized array. Malloc creates a pointer to memory block that will hold array. 
	p_testArray = (int *) malloc(arraySize*sizeof(int));
	printf("You entered: %d\n", arraySize);
	// Error checking on malloc function. Prints an error to the user if there is an error allocating the memory 
	/*if (p_testArray == NULL){
		printf("Error allocating memory!\n");
		return 1;
		}*/
	// Add random integer to array 
	for (index = 0; index <=arraySize - 1; index++){
			p_testArray[index] = rand();
		}
	//Opens file for writing. "w" attribute denotes file writing 
		fp = fopen("C:\\Users\\Mathew Wiper\\Documents\\randomIntegers.txt", "w");
	for (i = 0; i<=arraySize - 1; i++){
		// fprintf prints to file
		fprintf(fp, "%d\n", p_testArray[i]);
			
		}
    // Frees memory block allocated to p_testArray after writing to file. No point in keeping those values in memory once
	// they are writen to file
	free(p_testArray);
	// Closes the file. No more data can be added to the file in this instance 
	fclose(fp);
	printf("\n");
	printf("Press enter to exit...");
	getchar();
}