/*Q105: Write a program to take an integer array nums of size n, and print the majority element. 
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists.
 Note: Majority Element is not necessarily the element that is present most number of times.
*/

#include<stdio.h>
int main () {
    int n;
    printf("Enter a size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int k=0;
         for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
               k++;
            }

         if(k>n/2){
                printf("%d",arr[i]);
                return 0;
            }
    }

    printf("-1\n");
    return 0;
}