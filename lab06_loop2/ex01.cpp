#include <stdio.h>
int main(){
	int num,result;
	while(1){
	printf("Pleas enter a number (-1 to exit):");
	scanf("%d",&num);
	if(num == -1){
		printf("\nGood Bye! I\nwill miss you.\n");
		break;
	}
	for(int i =1;i <= 12;i++){
		result = num*i;
		printf("%d*%d = %d\n",num,i,result);
		}
	}
}
