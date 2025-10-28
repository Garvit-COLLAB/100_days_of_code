//Delete an element from an array

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
     printf("Enter the index position in array to delete element:");
     scanf("%d",&position);
     int deleted;
     int new[n-1];

     if(position<0||position>=n){
        printf("invalid index!\n");
        return -1;
     }

     for (int i=0,j=0;i<n;i++){
             if (i==position) {
                 deleted=arr[i];
             } else {
                 new[j]=arr[i];
                 j++;
             }
        
     }

      printf("New array is:");
     for(int i=0;i<n-1;i++) {
        printf(" %d",new[i]);
     }

     return 0;
}