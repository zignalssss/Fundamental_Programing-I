#include<stdio.h>
int main(){
	char light;
	printf("Input traffic light color (R=Red,G=Green):");
	scanf("%c",&light);
	if(light == 'R' || light == 'r'){
		printf("Stop!");
	}
	else if (light == 'G' || light == 'g'){
		printf("Go!");
	}
}
