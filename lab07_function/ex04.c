#include <stdio.h>

int Prime_number(int prime){
	int i;
	for (i = 2; i <= prime - 1; i++){
		if(prime % i  == 0)
			return 0;
	}
	return 1;
}
int main(){
	int number,result;
	printf("Enter an integer number:");
	scanf("%d",&number);
	result = Prime_number(number);
	if(result == 1)
		printf("%d is a prime number.",number);
	else
		printf("%d is not a prime number",number);
		
	return 0;
}
