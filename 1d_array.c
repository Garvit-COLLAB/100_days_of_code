//Read and print elements of a one-dimensional array.

#include<stdio.h>

int main () {
    int n;
    printf("Enter number of input:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    int arr[n];
    
    for(int i=0;i<n;i++) {
     scanf("%d", &arr[i]);
    }
    
    printf("Your entered numbers:");

    for(int i=0;i<n;i++) {
      printf("%d ",arr[i]);
    }
   
    return 0;
}


  
