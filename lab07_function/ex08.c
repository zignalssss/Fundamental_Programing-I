#include <stdio.h>
#include <math.h>
void distance(float x_1,float y_1,float x_2 ,float y_2){
	float dis,x,y;
	x = x_1 - x_2;
	y = y_1 - y_2;
	dis = sqrt(pow(x,2) + pow(y,2));
	printf("Distance between (%d,%d) and (%d,%d) = %.2f",x_1,x_2,y_1,y_2,dis);
}
int main(){
	int x1,x2,y1,y2;
	printf("Enter x of point 1:");
	scanf("%d",&x1);
	printf("Enter y of point 1:");
	scanf("%d",&y1);
	printf("Enter x of point 2:");
	scanf("%d",&x2);
	printf("Enter y of point 2:");
	scanf("%d",&y2);
	distance(x1,y1,x2,y2);
	return 0;
}



