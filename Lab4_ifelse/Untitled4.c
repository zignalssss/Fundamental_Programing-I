#include<stdio.h>
int main(){
	int one,two;
	printf("Enter two integer numbers:");
	scanf("%d %d",&one,&two);
	if(one < two){
		printf("Up!");
	}
	else if (two < one){
		printf("Down!");
	}
	else {
		printf("Equal!");
	}
}
