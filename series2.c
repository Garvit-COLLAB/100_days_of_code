//program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
int main () {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    float sum =0,a =2,b =3;
    for(int i =1;i<=n;i++) {
       sum +=a/b;
       a +=2;
       b +=4; 
    }
    printf("sum of series:%.2f",sum);
    return 0;
}