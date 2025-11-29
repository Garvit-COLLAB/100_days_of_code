//Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the maximum element in each subarray of size k moving from left to right.
//Print the maximum elements for each window separated by spaces as output.

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
      return 1;
     }
     int max[n-k+1];
    
     for(int i=0;i<n-k+1;i++){
         max[i]=arr[i];
     }


    for (int i=0;i<n-k+1;i++) {

        for (int j=i;j<k+i;j++) {
            if(arr[j]>max[i]) {
                max[i]=arr[j];
            }
        }
    }

    printf("Maximum element of each subarray of size %d:",k);
    for(int i=0;i<n-k+1;i++) {
        printf("%d ",max[i]);
    }

    return 0;
}