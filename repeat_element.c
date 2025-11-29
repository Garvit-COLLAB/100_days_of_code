/*Q119: Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

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

     int repeat[1000]={0};
     int same=-1;

     for(int i=0;i<n;i++){
        if (repeat[arr[i]]){
            same=arr[i];
            break;
        }
        repeat[arr[i]]=1;
     }

     printf("%d",same);
    return 0;
}