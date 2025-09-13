#include<stdio.h>
int main () {
    int n,a =1;
    printf("Enter number:");
    scanf("%d",&n);
    int b = 2;
    do{
        int i ;
        i = n % b;
        ++b;
        if (i == 0){
           a=0;
           break;
        }
    } while (b<n);

    if(a == 1){
        printf("%d is a prime number",n);
    } else {
        printf("%d is not a prime number",n);
    }
    return 0;
}