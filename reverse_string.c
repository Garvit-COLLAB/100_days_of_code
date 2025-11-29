//Reverse a string.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%s",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++) {
        count++;
    }

    char reverse[1000];
    for(int i=0;i<count;i++){
        reverse[i]=str[count-i-1];
    }
    reverse[count]='\0';

    printf("Reverse of given string is:%s",reverse);

    return 0;
}