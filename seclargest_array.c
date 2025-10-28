//the second largest element in an array.

#include<stdio.h>
int main () {
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    int integer[n];
    printf("Enter %d numbers:",n);

    for(int i=0;i<n;i++) {
        scanf("%d",&integer[i]);
    }
    int max = integer[0];
    int second=integer[0];

    for(int i=0;i<n;i++) {
        if(integer[i]> max) {
            max=integer[i];
        }
    }

    for(int i=0;i<n;i++) {
        if(integer[i]>second && integer[i] < max) {
            second = integer[i];
        }
    } 

 printf("The second largest element in array is:%d ",second);
    return 0;
}