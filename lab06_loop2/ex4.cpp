#include <stdio.h>
int main(){
	int j = 1,low,high,check,count=0;
	printf("Enter two integers:");
	scanf("%d %d",&low,&high);
//	printf("There are 2 prime number between %d and %d.",low,high);
	
	while(low < high){
		check = 0;
		if(low < 2){
			low += 1;
			continue;
		}
		
		while(j < low ){                  
			if(low % j == 0){	
				count = count + 1;
				check = 1;
			}
			j++;
		}
		if(check == 0){
			printf("%d is a not prime number \n",low);
		}else{
			printf("%d is a prime number \n",low);	
		}
	 ++low;
	}
	return 0;
}
