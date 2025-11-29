//Write a program to take an integer array arr and an integer k as inputs.
// Print the maximum sum of all the subarrays of size k.

#include<stdio.h>
int main () {
     int n,k;
     printf("Enter a length of array:");
     scanf("%d",&n);

     int arr[n];
     printf("Enter %d numbers:",n);

     for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
     }

     printf("Enter k:");
     scanf("%d",&k);

     if (k>n || k<=0) {
      printf("Invalid k\n");
     }
    
     int sum=0;

    for (int i=0;i<k;i++) {
        sum +=arr[i];
    }
    
    int max=sum;

    for (int i=k;i<n;i++) {
      sum +=arr[i]-arr[i-k];
      if (sum>max){
         max=sum;
      }
    }

    printf("Maximum sum of subarrrays of size %d:%d",k,max);
     return 0;
}