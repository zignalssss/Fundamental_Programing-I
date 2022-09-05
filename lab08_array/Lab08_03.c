#include <stdio.h>
int maximum_number(int arr[]){
	int j,index,max = arr[0];
	for(j = 1;j<=5;j++){
		if(arr[j]> max){
			max = arr[j];
			index = j-1;
		}
	}
	printf("\nThe maximum value is %d at index %d. ",max,index);
}
int main(){
	int j,i,arr[5];
	for(i = 1;i<=5;i++){
		printf("Enter number#%d:",i);
			scanf("%d",&arr[i]);	
	}
	maximum_number(arr);
	return 0;
}
