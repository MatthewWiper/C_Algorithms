#include <stdlib.h>
#include <stdio.h>


void *generateFib(int first, int second, int lengthOfSequence);
int   printfibSeriesToFile(int first);

int main()
{
	int first, second, lengthOfSequence;
	int programSelector;
	char filePrintSelector;
	printf("FIBONACCI BONANZA!!!!!!!\n");
	printf("To generate Fibonacci sequence for n iterations press 1\n to determine nth term in Fibonacci sequence press 2.\n");
	scanf("%d", &programSelector);
	if (programSelector != 1 || programSelector != 2)
	{
		printf("Select a valid program. 1 for sequence, 2 for nth term.");
		scanf("%d", &programSelector);
	}

	if (programSelector == 1)
	{
		printf("Enter the two numbers to generate Fibonacci sequence: ");
		scanf("%d", &first);
		if (first<0)
		{
			printf("Enter a positive integer: ");
			scanf("%d", &first);
		}
		scanf("%d", &second);
		if (second<0)
		{
			printf("Enter a positive integer: ");
			scanf("%d", &second);
		}
		printf("Enter the length of the sequence you require: ");
		scanf("%d", &lengthOfSequence);
		if (lengthOfSequence == 1)
		{
			printf("Enter a non-trivial sequence length (length > 3): ");
			scanf("%d", &lengthOfSequence);
		}
		generateFib(first, second, lengthOfSequence);
		printf("Would you like to print this series to a .txt file? (y/n)");
		scanf("%c", &filePrintSelector);
		if (filePrintSelector == 'y')
		{
			printfibSeriesToFile(first);
		}
	}
	return 0;
}
void *generateFib(int first, int second, int lengthOfSequence)
{
	int index, value, fib1, fib2;
	lengthOfSequence = lengthOfSequence - 1;
	if (first > second)
	{
		fib2 = first;
		fib1 = second;
	}
	else
	{
		fib1 = first;
		fib2 = second;
	}
	printf("%d\n", fib1);
	printf("%d\n", fib2);
	for (index = 2; index <= lengthOfSequence; index++)
	{
		value = fib1 + fib2;
		printf("%d\n", value);

		fib1 = fib2;
		fib2 = value;
	}
}
	int  printfibSeriesToFile(int first)
	{
		FILE *outFile;
			outFile = fopen("test.txt", "w");
		if (outFile == NULL)
		{
			return 1;
		}
		fprintf(outFile, "success");
		fclose(outFile);
	}

