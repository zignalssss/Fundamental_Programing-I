#include <stdio.h>

float all_average(float average){
	float result = average / 5;
	return result;
}
int main(){
	int allnumber,one,two,three,four,five;
	printf("Enter an interger:");
	scanf("%d",&one);
	printf("Enter an interger:");
	scanf("%d",&two);
	printf("Enter an interger:");
	scanf("%d",&three);
	printf("Enter an interger:");
	scanf("%d",&four);
	printf("Enter an interger:");
	scanf("%d",&five);
	allnumber = one+two+three+four+five;
	printf("The average of [%d,%d,%d,%d,%d] is %.2f",one,two,three,four,five,all_average(allnumber));
}
