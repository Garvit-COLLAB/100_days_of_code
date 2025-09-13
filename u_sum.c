#include<stdio.h>
int main (){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
     int reverse = 0;
     printf("Sum of unit_digit of %d",n);
    
     do{ 
        int digit = n % 10;
        reverse += digit;
        n = n/10;
        
    } while (n > 0);
   
    printf(" is = %d",reverse);

    return 0;    
}