#include <stdio.h>
#include <math.h>
float inital_investment(float initial,float rate,float years){
	float perimeter = initial * pow(( 1 + rate),years);
	return perimeter;
}

int main(){
	float in,rate,year;
	printf("Enter an initial investment: ");
	scanf("%f",&in);
	printf("Enter an interest  rate: ");
	scanf("%f",&rate);
	printf("Enter a number of years: ");
	scanf("%f",&year);
	printf("Enter principal_year_N = %.2f",inital_investment(in,rate,year));
	return 0;
}
