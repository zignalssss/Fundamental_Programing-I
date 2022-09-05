#include <stdio.h>
#include <math.h>

float Heron_Formula(int x_1,int y_1,int x_2 ,int y_2,int x_3,int y_3){
	float a = sqrt(pow((x_1-x_3),2) + pow((y_1-y_3),2));
	float b = sqrt(pow((x_3-x_2),2) + pow((y_3-y_2),2));
	float c = sqrt(pow((x_1-x_2),2) + pow((y_1-y_2),2));
	float s = (a+b+c)/2;
	float area = sqrt(s*((s-a)*(s-b)*(s-c)));
	return area;
}

int main(){
	int x1,x2,x3,y1,y2,y3;
	printf("Enter point 1 (x1,y1)\n");
	printf("x: ");
		scanf("%d",&x1);
	printf("y: ");
		scanf("%d",&y1);
	printf("Enter point 2 (x2,y2)\n");
	printf("x: ");
		scanf("%d",&x2);
	printf("y: ");
		scanf("%d",&y2);
	printf("Enter point 2 (x3,y3)\n");
	printf("x: ");
		scanf("%d",&x3);
	printf("y: ");
		scanf("%d",&y3);
	float area = Heron_Formula(x1,y1,x2,y2,x3,y3);
	printf("The area of a triangle = %.2f",area);
	
	return 0;
}
