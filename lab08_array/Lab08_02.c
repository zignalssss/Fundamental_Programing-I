#include <stdio.h>
int main(){
	int i,counter = 0,arr[100];
	while(1){
		printf("Enter a number (-1 to exit):");
		scanf("%d",&arr[counter]);
			if(arr[counter] == -1)
			break;
		counter++;
	}
	printf("The number of input is %d. \n",counter);
	printf("The number of reverse order are");
	for(i = counter -1;i>=0;i--){
			printf(" %d ",arr[i]);
	}
	return 0;
}
