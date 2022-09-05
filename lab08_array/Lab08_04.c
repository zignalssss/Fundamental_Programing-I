#include <stdio.h>
float summation_number(float arr[],int count){
	int i,j;
	float sum = arr[0];
	printf("\nThe summation of [");
	for(i = 1 ;i < count;i++){
		sum+=arr[i];
	}
	for(j = 0;j<count-1;j++){
		printf("%.2f, ",arr[j]);
	}
	printf("%.2f] is %.2f.",arr[j],sum);
}
int main(){
	int i,count=0;
	float arr[99];
	for (i = 0 ;i < sizeof(arr);i++){
		printf("Enter an integer (-1 to exit):");
		scanf("%f",&arr[i]);
		if(arr[i] == -1){
			break;
		}	
		count += 1;
	}
	summation_number(arr,count);
	return 0;
}
