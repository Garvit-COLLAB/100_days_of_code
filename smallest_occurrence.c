/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
 This element is called the ceil of x. If such an element does not exist, print -1.
  Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. */

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include<stdio.h>
int main () {
    int arr[100],n=0,x;
    printf("Enter an input:");
    char ch;
    while(scanf(" %c",&ch)==1){
        if(ch=='['){
           while(1) {
            if(scanf("%d",&arr[n])!=1) break;
            n++;
            scanf(" %c",&ch);
           if (ch==']') break;
           }
        }
        if(ch=='='){
            if(scanf("%d",&x)==1) break;
        }
    }


    int lo=0,hi=n-1;
    int occurrence=-1;

    while(lo<=hi){
        int mid =lo+(hi-lo)/2;
        if(arr[mid]>=x){
         occurrence=mid;
           hi=mid-1;
        } else{
            lo=mid+1;
        }

    }

    if(occurrence!=-1){
    printf("smallest number greater than %d is %d,whose index is %d",x,arr[occurrence],occurrence);
    } else{
        printf("There is no smallest number greater than %d ,therefore it's occurrence is %d",x,occurrence);
    }

return 0;
}