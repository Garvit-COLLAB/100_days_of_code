/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output.
If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include<stdio.h>
int main () {
     int nums[100],n=0,target;
     printf("Enter an input:");
     char ch;
     while(scanf(" %c",&ch)==1){
        if(ch=='['){
           while(1) {
             if(scanf("%d",&nums[n])!=1) break;
             n++;
             scanf(" %c",&ch);
             if (ch==']') break;
            }
         }
         if(ch=='='){
            if(scanf("%d",&target)==1) break;
         }
     }

     for(int i=0;i<n;i++) {
        if (nums[i]<0){
            printf("Invalid input!Enter a positive integers");
            return 1;
        }
     }

     printf("Distinct indices i and j in nums array which equal to target:");
     for (int i=0;i<n;i++) {
        int true=0;
        for (int j=i+1;j<n;j++){
            if (nums[i]+nums[j]==target){
                printf("[%d %d]",i,j);
                true=1;
                break;
            }
        }
        if(true){
            break;
        }
     }

    return 0;
} 