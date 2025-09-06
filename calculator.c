#include<stdio.h>
int main(){
 int a,b;
 char op;
 printf("Enter two number and operation you want:");
 scanf("%d %d %c", &a, &b, &op);

     switch (op) {
     case '+':printf("The sum of these two numbers:%d\n",a+b);break;
     case '-':printf("The subtraction of these two numbers:%d\n",a-b);break;
     case '*':printf("The multiplication of these two numbers:%d\n",a*b); break;
     case '/':
        if (b != 0)
        {    
     printf("The division of these two numbers:%d\n",a/b);
        } 
        else 
        {
            printf("The division of these two numbers:undefined\n");
        }
        break;
    case '%':
          if (b != 0)
        {    
     printf("The remainder of these two numbers:%d\n",a%b);
        } 
        else 
        {
     printf("The remainder of these two numbers:undefined\n");
        }
        break;
     
     default:printf("Invalid operation.");
     }
     return 0;
}