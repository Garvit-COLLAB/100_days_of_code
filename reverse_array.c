//Reverse an array without taking extra space.

#include<stdio.h>
int main() {
 int n;
   printf("Enter the number of inputs:");
   scanf("%d",&n);
   int input[n];
   printf("Enter %d numbers:",n);

   for(int i=0;i<n;i++) {
       scanf("%d",&input[i]);
   }

   printf("Reverse order of input:");
   
   for(int i=(n-1);i>-1;i--){
       printf("%d ",input[i]);
   }

    return 0;
}