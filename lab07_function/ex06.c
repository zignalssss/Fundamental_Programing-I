#include <stdio.h>

int main(){
	char character;
	int number;
	printf("Enter a character:");
	scanf("%c",&character);
	printf("Enter a number");
	scanf("%d",&number);
	printchars(character,number);
}
void printchars(char ch, int n){
	int i;
	for(i = 1;i <= n;i++){
		printf("%c",ch);
	}
}


