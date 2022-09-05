#include <stdio.h>
int main(){
	int num,result=1;
	printf("Enter a number (n):");
	scanf("%d",&num);
	for(int i = 1;i <= num;i++){
		result *= i;
	}
		printf("%d! is %d",num,result);
	
}
