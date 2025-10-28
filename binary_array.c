//Search in a sorted array using binary search.

#include<stdio.h>
int binary(int n,int arr[n],int digit);
int main(){
     int n;
     printf("Enter the number of inputs:");
     scanf("%d",&n);
     int arr[n];
     printf("Enter %d numbers:",n);

     for(int i=0;i<n;i++) {
     scanf("%d",&arr[i]);
     }

     int digit;
     printf("Enter the number to search:");
     scanf("%d",&digit);
     
     int final=binary(n,arr,digit);

     if(final!=-1){
             printf("Element found at index:%d\n",final);
     } else {
             printf("Element not found at index:%d\n",final);  
     }
    
     return 0;
}

     int binary(int n,int arr[n],int digit) {
     int low=0,high=n-1;

     while(low<=high) {
         int mid=low+(high-low)/2;

         if(arr[mid]==digit){
            return mid;
         } else if(arr[mid]<digit){
            low=mid+1;
         } else {
            high=mid-1;
         }
         }
         return -1;
     }