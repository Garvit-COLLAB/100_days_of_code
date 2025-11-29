/*Q118: Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1
Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include<stdio.h>
int main () {
     int arr[100],n=0;
     char ch;
    
     printf("Enter a input:");
     while(scanf(" %c",&ch)==1 && ch!='[');
     while (1) {
     if (scanf("%d",&arr[n])!=1)break;
     n++;

     scanf("%c",&ch);

     if (ch==']') break;
     }
    
     int missing=n;

     for(int i=0;i<n-1;i++) {
         for(int k=0;k<n-1-i;k++){
            if(arr[k]>arr[k+1]){
                 int temp=arr[k];
                 arr[k]=arr[k+1];
                 arr[k+1]=temp;
            }
         }
     }

     for(int i=0;i<n;i++) {
         if(arr[i]!=i){
             missing=i;
             break;
         }
     }
 
     printf("Missing number is:%d",missing);
 
     return 0;
}
