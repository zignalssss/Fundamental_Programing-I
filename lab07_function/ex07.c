#include <stdio.h>

int main(){
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	factorial(number);
}

void factorial(int n){
	int i,fac = 1;
	for(i = 1;i<=n;i++){
		fac *= i;
	}
	printf("%d! = %d",n,fac);
}
