/* Q112: Write a program to take an integer array arr as input.
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
 Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

*/

#include<stdio.h>
int main () {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:",n);
    
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }

    int c_sum=arr[0];
    int m_sum=arr[0];

    for (int i=1;i<n;i++) {
          if (c_sum+arr[i]>arr[i]) {
             c_sum=c_sum+arr[i];
          } else {
             c_sum=arr[i];
          }

          if (c_sum>m_sum) {
             m_sum=c_sum;
          }
    }

    printf("%d ",m_sum); 
     
    return 0;
}