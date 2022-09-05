#include <stdio.h>
int main(){
	int num,count,i,prime_num;
	printf("Enter an integer:");
	scanf("%d",&num);
	for(i = 1; i < num; i++){
		if(num%i == 0)
			prime_num = 0;
		else
			prime_num = 1;	
	}
	if(prime_num == 1){
		printf("%d is a prime number",num);
	}else{
		printf("%d is a not prime number",num);
	}
	return 0;
}
