//Find the sum of array elements.

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

    int sum =0;

    for(int i=0;i<n;i++) {
      sum += arr[i];
    }

    printf("sum:%d",sum);
   
    return 0;
}