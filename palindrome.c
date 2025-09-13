#include<stdio.h>
int main (){
    int n,a;
    printf("Enter number:");
    scanf("%d",&n);
    a=n;
     int reverse = 0;
    
    
     do{ 
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n/10;
        
    } while (n > 0);
   
    if(a == reverse){
        printf("%d is a palindrome number.",a);
    } else {
        printf("%d is not a palindrome number.",a);
    }

    return 0;    
}