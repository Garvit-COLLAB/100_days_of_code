//Search for an element in an array using linear search.

#include<stdio.h>
int main () {
  int n;
  printf("Enter the number of inputs:");
  scanf("%d",&n);
   int arr[n];
   printf("Enter %d numbers:",n);

   for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
   }
   
   int input,a = -1;
   printf("Enter the input for linear search:");
   scanf("%d",&input);

   for(int i =0;i<n;i++) {
      if(arr[i]==input){
        a = i;
        break;
      } 
   }
   
   if (a==-1) {
    printf("Please enter correct input:%d",a);
   } else {
    printf("Input %d Found at index:%d",input,a);
   }
  
   return 0;
}