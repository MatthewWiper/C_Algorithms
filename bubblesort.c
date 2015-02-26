#include <stdio.h>

void sortFunction(char array[10]);

int main(void){
	
	char array[10] = {1,4,6,5,7,8,9,3,0,2};
	
	sortFunction(array);
	return 0;
}

void sortFunction(char array[10]){
	int i, j, k = 0;
	int temp = 0;
	
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			if(array[i] > array[j]){
				temp = array[i];	
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for(k-0;k<=9;k++){
		printf(" %d", array[k]);
	}
}
