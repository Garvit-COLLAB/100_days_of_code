//Write a Program to take an integer array nums. 
//Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include<stdio.h>
int main () {
    int n;
    printf("Enter a length of array:");
    scanf("%d",&n);
    int nums[n];
    printf("Enter %d numbers:",n);

    for(int i=0;i<n;i++) {
        scanf("%d",&nums[i]);
    }

     int answer[n];

    for(int i=0;i<n;i++){
        answer[i]=1;
        for(int k=0;k<n;k++){
           if (k!=i){
              answer[i] *=nums[k];
            }
        }
    } 
    printf("Product:[");
    for (int i=0;i<n;i++) {
       if (i==0) {
         printf("%d",answer[i]);
       } else {
         printf(",%d",answer[i]);
       } 
    }
    printf("]");


    return 0;
}