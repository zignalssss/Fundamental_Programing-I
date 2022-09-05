#include <stdio.h>
int main () {
   int num,sum =0,i = 1;
   while( i <= 5) {
      printf("Enter a integer #%d:",i);
      scanf("%d",&num);
      sum += num;
      i++;
   }
   printf("The summation is %d",sum);
   return 0;
}
