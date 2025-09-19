//Find the maximum and minimum element in an array.

#include<stdio.h>

int main () {
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    int arr[n];
    
    for(int i=0;i<n;i++) {
     scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<n;i++) {
     
      if (arr[i] > max) {
       max = arr[i];
      } 
      if (arr[i]< min) {
        min = arr[i];
      }
     
    }

    printf("maximum number:%d\n",max);
    printf("minimum number:%d\n",min);
  
    return 0;
   
}