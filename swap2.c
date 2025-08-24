//program to swap two numbers without using a third variable.(only integer number)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n The value of a:%d",a);
    printf("\n The value of b:%d",b);
    
    return 0;
}
