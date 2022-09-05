#include <stdio.h>
int main(){
	char input;
	const float pi = 3.1416;
	float result,input1,input2,radius;	
		
	printf("[r] Rectangle\n");
	printf("[c] Circle\n");
	printf("[t] Triangle\n");
	printf("[x] Exit\n\n");
	
	while(1){

	printf("\nSelect r/c/t/x: ");
	scanf(" %c",&input);

	if(input == 'r' || input == 'R'){
		printf("Enter height:");
		scanf("%f",&input1);
		printf("Enter width:");
		scanf("%f",&input2);
		result = input1*input2;
		printf("Area of this rectangle is %.2f\n\n",result);
	}
	else if(input == 'c' || input == 'C'){
		printf("Enter radius: ");
		scanf("%f",&input1);
		result = pi*(input1*input1);
		printf("Area of this circle is %.2f\n\n",result);
	}
	else if(input == 't' || input == 'T'){
		printf("Enter height: ");
		scanf("%f",&input1);
		printf("Enter base: ");
		scanf("%f",&input2);
		result = 0.5*input2*input1;
		printf("Area of this triangle is %.2f\n\n",result);
	}
	else if(input == 'x' || input == 'x'){
		printf("Bye!");
		return 0;
	}
	else {
		printf("Invalid command!\n");
	}
	}
	return 0;
}

