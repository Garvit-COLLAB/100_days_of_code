//Convert a lowercase string to uppercase without using built-in functions.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[a-z]",str);
    
    for(int i=0;str[i]!='\0';i++) {
        str[i]=str[i]-32;
    }

    printf("Uppercase of given string:%s\n",str);
     
    return 0;
    }