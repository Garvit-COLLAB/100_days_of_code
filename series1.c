//program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>
int main () {
   int n;
   float sum =1.0;
    printf("Enter number:");
    scanf("%d",&n);
 float a=1;
    for(int i =1;i<n;i++) {
    sum +=(2*a+1)/(2*a+2);
    a++;
    }
    printf("sum of the series:%.1f",sum);
    return 0;
}
