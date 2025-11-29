/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include<stdio.h>
#include<string.h>
enum arithmetic {ADD,SUBTRACT,MULTIPLY};
int main () {
    char input [10];
    printf("Enter Operation to perfrom:");
    scanf("%s",input);

    enum arithmetic op;
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    if(strcmp(input,"ADD")==0){op=ADD;}
    else if(strcmp(input,"SUBTRACT")==0){op=SUBTRACT;} 
    else if(strcmp(input,"MULTIPLY")==0){op=MULTIPLY;}
    else {printf("Invalid input");return 1;}

    switch (op)
    {
    case ADD :printf("ADD = %d",a+b);break;
    case SUBTRACT :printf("SUBTRACT = %d",a-b);break; 
    case MULTIPLY :printf("MULTIPLY = %d",a*b);break;
    }

    return 0;
}