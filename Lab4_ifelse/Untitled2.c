#include <stdio.h>
int main(){
	char data[50];

	printf("Enter your password:");
	scanf("%s",data);
		if(data != "Bourne007"){
			printf("Access Denied!\nProgram terminated.");
		}
		else{
			printf("Access Granted!\nWelcome to MI6.");
		}	
	return 0;
}

