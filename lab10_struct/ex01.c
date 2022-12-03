#include <stdio.h>

int main (){

	struct information{
	char address[5];
	char sec_address[15];
	char city[15];
	char state[15];
	char zip_code[15];
};

	struct information inf;
	printf("Enter the first address: ");
	scanf("%s",inf.address);
	printf("Enter the second address: ");
	scanf("%s",inf.sec_address);
	printf("Enter city: ");
	scanf("%s",inf.city);
	printf("Enter state: ");
	scanf("%s",inf.state);
	printf("Enter zip code: ");
	scanf("%s",inf.zip_code);
	printf("\n");
	printf("The data record is [%s, %s, %s, %s, %s].",inf.address,inf.sec_address,inf.city,inf.state,inf.zip_code);
	
	return 0;
}
