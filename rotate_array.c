//Rotate an array to the right by k positions.

#include<stdio.h>
int main() {
     int n;
     printf("Enter the number of inputs:");
     scanf("%d",&n);
     int arr[n];
     printf("Enter %d numbers:",n);

     for(int i=0;i<n;i++) {
     scanf("%d",&arr[i]);
     }
    
     int rotate;
     printf("Enter index to rotate position of array:");
     scanf("%d",&rotate);
     int new[n];

     for(int i=0;i<n;i++) {
         new[(i+rotate) % n]=arr[i];      
     }
    
     printf("new array is:");
     for(int i=0;i<n;i++){
         printf(" %d",new[i]);
     }
     return 0;
}