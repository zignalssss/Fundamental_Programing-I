#include <stdio.h>
int integer_search(int count,int arr[count],int number){
	int i,index = 0;
	for( i = 0;i<=count;i++){
        if(number == arr[i]){
            index = i;
        }
    }
    return index;
}
int main(){
	int number,i,count=0,arr[99];
	while(1){
		printf("Enter an integer (-1 to exit):");
		scanf("%d",&arr[count]);
		if(arr[count] == -1){
			count--;
			break;
		}	
		count++;
	}
	printf("\nEnter the number to search :");
	scanf("%d",&number);
	int search = integer_search(count,arr,number);
	if(search == 0){
		printf("\nSorry, %d is not in [",number);
		for(i = 0 ;i<count;i++){
			printf("%d,",arr[i]);
		}
		printf("%d]",arr[i]);
	}else{
		printf("\n%d is found in [",number);
		for(i = 0 ;i<count;i++){
			printf("%d,",arr[i]);
		}
		printf("%d] at index %d.",arr[i],search);
	}
	return 0;
}
