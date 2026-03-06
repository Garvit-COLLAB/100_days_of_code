//  program to input two numbers and display their sum, difference, product, and quotient.(only integer number)

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

     printf("The sum of a and b:%d\n",a+b);
     printf("The difference of a and b:%d\n",a-b);
     printf("The product of a and b:%d\n",a*b);
     
    (b==0)? printf("The quotient of a and b:undefined\n") : printf("The quotient of a and b:%d\n",a/b);

    return 0;
}
