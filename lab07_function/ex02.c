#include <stdio.h>
float circle(float radius){
	const float PI = 3.14;
	return 2*PI*radius;
}

int main(){
	int r;
	printf("Enter a radius of circle:");
	scanf("%d",&r);
	printf("The perimeter of circle = %.2f",circle(r));
	return 0;
}
