#include <stdio.h>

void sortFunction(char array[10]);

int main(void){
	
	char array[10] = {1,4,6,5,7,8,9,3,0,2};
	
	sortFunction(array);
	return 0;
}

void sortFunction(char array[10]){
	int i, j, k = 0;
	int temp, holding;
	
	array[0] = temp;
	for(i=1;i<=9;i++){
		if(array[i]>array[i-1])
			holding = array[i];
	
		
	
	for(k=0;k<=9;k++){
		printf(" %d", array[k]);
	}
}
}
