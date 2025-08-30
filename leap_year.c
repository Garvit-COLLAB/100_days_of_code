//program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
    int a;
    printf("enter any year:");
    scanf(" %d",&a);

    if (a%400 == 0||a%400 !=0 && a%100 != 0 && a%4 == 0){
       printf("%d is a leap year.\n",a);
    }else {
        printf("%d is not a leap year.\n",a);
    }

    return 0;
    
}