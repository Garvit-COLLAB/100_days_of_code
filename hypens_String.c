//Replace spaces with hyphens in a string.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[^\n]",str);

    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==' '){
            str[i]='-';
        }
    }

    printf("Replaced string is:%s",str);
    return 0;
}