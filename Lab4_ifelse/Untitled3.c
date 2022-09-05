#include<stdio.h>
int main(){
	int num;
	printf("Enter an integer number:");
	scanf("%d",&num);
	if(num < 0){
		printf("The number you enter is negative.");
	}
	else{
		printf("The number you enter is positive");
	}
	return 0;

}
