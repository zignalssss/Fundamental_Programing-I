#include <stdio.h>
int main(){
	int i,arr[10];
	printf("Initializing the array...\n");
	for(i=0;i<10;i++){
		arr[i] = i;
	printf("Print out index %d = %d\n",i,arr[i]+1);
	}
		printf("Printing out the array...\n");
	return 0;
}
