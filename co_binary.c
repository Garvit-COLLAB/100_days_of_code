#include<stdio.h>
int main() {
    int n;
    printf("Enter binary number:");
    scanf("%d",&n);
    int binary =0,a,co;
    while(n>0){
        binary =binary *10 + (n %10);
        n= n/10;
        a++;
    }

    while(a>0){
    co =binary % 10;
    if (co == 0){
    printf("1");
    } else {
    printf("0");
    }
    binary /= 10;
    a--;
    } 
    
    return 0;
}