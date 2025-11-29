//Remove all vowels from a string.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[a-zA-Z]",str);
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
    int count=0;

     for(int i=0;str[i]!='\0';i++) {
        int value=1;
        for(int j=0;j<10;j++){
            if(str[i]==vowel[j]) {
                value=0;
                break;
            }
        }
        if(value) {
            str[count]=str[i];
            count++;
        }
    }
    str[count]='\0';

    printf("%s",str);

    return 0;
}