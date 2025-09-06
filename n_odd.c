//check first n odd number sum

#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1;i <= n*2; i +=2) {
        sum +=i;
    }
    printf("sum of first %d odd number:%d",n,sum);

    return 0;
}