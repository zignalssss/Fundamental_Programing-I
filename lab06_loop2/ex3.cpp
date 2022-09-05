#include <stdio.h>
int main(){
	int num,i,j;
	printf("Enter the size of triangle:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=num-i;j>=0;j--){
			printf("*");
		}
		printf("\n");
	}
}
