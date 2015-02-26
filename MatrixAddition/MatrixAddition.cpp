#include <stdio.h>
#include <stdlib.h>

/* Program to add two matrices together 

 NEED TO FIGURE OUT ISSUES: ONLY ABLE TO ENTER SQUARE MATRICES
							PRINT MATRIX PRINTS MEMORY ADDRESS
*/

int main ()
	{

	// Pointers for 2-D matrix addition. Two pointers.  
	int **p_firstMatrix;
	int **p_secondMatrix;
	int **p_resultantMatrix;
	int rows, columns, i, j; 

	printf("Application to add 2 matrices\n");
	printf("\n");
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &columns);
	
	// Dynamically size arrays from user dimension input  
	p_firstMatrix = (int**)malloc(rows*sizeof(int*));
	p_secondMatrix = (int**)malloc(rows*sizeof(int*));
	p_resultantMatrix = (int**)malloc(rows*sizeof(int*));

	// Dimenion the columns. 
	for(i=0;i<columns;i++)
			p_firstMatrix[i] = (int*)malloc(columns*sizeof(int));

	for(i=0;i<columns;i++)
			p_secondMatrix[i] = (int*)malloc(columns*sizeof(int));

	for(i=0;i<columns;i++)
			p_resultantMatrix[i] = (int*)malloc(columns*sizeof(int));

	printf("\n");

	printf("Enter the first matrix: \n");

		for(i=0;i<rows;i++)
			for(j=0;j<columns;j++)
					scanf("%d", &p_firstMatrix[i][j]);  

	printf("\n");
	printf("Enter the second matrix: \n");

		for(i=0;i<rows;i++)
			for(j=0;j<columns;j++)
					scanf("%d", &p_secondMatrix[i][j]);

		// add the matrices 
		for(i=0;i<rows;i++)
			for(j=0;j<columns;j++)
					p_firstMatrix[i][j] = p_firstMatrix[i][j] + p_secondMatrix[i][j];

		printf("\n");

		// Print the resultant matrix to the console
		for(i=0;i<rows;i++){
			printf("\n");
			for(j=0;j<columns;j++)
					printf("%d ", p_resultantMatrix[i][j]);
			}

		printf("\n");
	// Free arrays from memory 
	free(p_firstMatrix);
	free(p_secondMatrix);
	
	system("pause");
	return 0;
	}