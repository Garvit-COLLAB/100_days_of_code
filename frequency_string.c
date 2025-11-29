//Count frequency of a given character in a string.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    char charc;
    printf("Enter a character to find it's frequency:");
    scanf(" %c",&charc);
    int count=0;

    for(int i=0;str[i]!='\0';i++){
        if (str[i]==charc) {
            count++;
        }
    }

    printf("frequency of given charcter %c in given string is:%d",charc,count);

    return 0;
}