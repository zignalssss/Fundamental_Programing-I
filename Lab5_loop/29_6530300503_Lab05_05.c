#include <stdio.h>
int main(){
	int first,sec;
	printf("Enter two number:");
	scanf("%d %d",&first,&sec);
	for(int i = first; i <= sec ;i++){
		if(i%2 == 0){
			printf("%d ",i);
		}
	}
	return 0;
}
