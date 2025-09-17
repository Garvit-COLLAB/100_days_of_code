// program to swap the first and last digit of a number.

#include<stdio.h>
int main () {
    int n,a,b,c=1,d=0;
    printf("Enter number:");
    scanf("%d",&n);
    int reverse =0,first =1,swap=0;
    
    do{
        reverse = reverse*10 + n % 10;
        if(first) {
        a=reverse;
        first =0;  
        }
        n = n /10;
       d++;
    } while (n>0);
      c=d;
     while (reverse >0){
        b = reverse % 10;
        reverse = reverse / 10;
        if(d==c) {   
        a=a+b;
        b=a-b;
        a=a-b;
        } else if(d==1) {
       b=a;
        }
        swap = swap*10 + b;
       d--;
    } 
    printf("%d",swap);
    return 0;
}