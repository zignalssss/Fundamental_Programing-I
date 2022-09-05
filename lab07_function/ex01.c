#include <stdio.h>

float BodyMassIndex(float weight,float height) {
	return weight / (height*height);
}
int main() {
	float h, w;
	printf("Enter width:");
	scanf("%f", &w);
	printf("Enter height:");
	scanf("%f", &h);
	printf("The area of the rectangle = %.2lf",BodyMassIndex(w,h));
	return 0;
}
