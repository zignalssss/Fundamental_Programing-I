#include <stdio.h>
int main(){
	int j,i,num,count= 0;
	printf("Enter an integer number: ");
	scanf("%d",&num);
	for(i = 1;i<=num;i++){				
		for(j = 1;j<=num;j++){
			if(count == 0){
				printf(" o ");
				count = !count;
			}
			else{
				printf(" x ");
				count = !count;
			}
		}
		printf("\n");
				if(count != 1){ 
					count = 1;
				}
				else{
					count = 0;
				}
	}
	return 0;
}
	

			
		

