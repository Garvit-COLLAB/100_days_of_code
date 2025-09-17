//program to check if a number is a strong number.

#include<stdio.h>
int main () {
    int n,strong=0,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
     int digit;
     digit = n % 10;
     n = n / 10;
     switch(digit){
        case 0:digit = 1;break;
        case 1:digit = 1;break;
        case 2:digit = 2;break;
        case 3:digit = 6;break;
        case 4:digit = 24;break;
        case 5:digit = 120;break;
        case 6:digit = 720;break;
        case 7:digit = 5040;break;
        case 8:digit = 40320;break;
        case 9:digit = 362880;break;
        default:printf("invalid");
     }
    strong +=digit;
    }
    if(temp == strong) {
        printf("%d is a strong number",temp);
    } else {
        printf("%d is not a strong number",temp);
    }

    return 0;
}