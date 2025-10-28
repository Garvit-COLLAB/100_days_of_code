//Insert an element in an array at a given position.

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

     int position;
     printf("Enter the index position in array to insert element:");
     scanf("%d",&position);
     int element;
     printf("Enter an element to insert in array:");
     scanf("%d",&element);

     int new[n+1];
     for (int i=0;i<n+1;i++){
         if(i<=position){
             if (i==position) {
                 new[i]=element;
             } else {
                 new[i]=arr[i];
             }
         } else {
             new[i]=arr[i-1];
         }
     }

     printf("New array is:");
     for(int i=0;i<n+1;i++) {
        printf(" %d",new[i]);
     }

     return 0;
}