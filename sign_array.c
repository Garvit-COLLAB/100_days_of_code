//Count positive, negative, and zero elements in an array.

#include<stdio.h>
int main () {
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    int number[n];
    printf("Enter %d numbers:",n);
    int positive = 0,zero = 0,negative = 0;

    for(int i=0;i<n;i++) {
        scanf("%d",&number[i]);

        if(number[i]>=0) { 
            if(number[i]>0) {
            positive += 1;
            } else {
                zero +=1;
            }
        } else {
            negative +=1;
        }
    }

    printf("Total positive numbers:%d\n",positive);
    printf("Total zeros:%d\n",zero);
    printf("Total negative numbers:%d\n",negative);

    return 0;
}