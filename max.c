// program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);

   if((a>b && a>c)||(b>a && b>c )){
     if(b>a && b>c ){
        printf("%d is a largest number among them.\n",b);
    } else {
        printf("%d is a largest number among them.\n",a);
    }
   } else {
    printf("%d is a largest number among them.\n",c);
   }

   return 0;
}