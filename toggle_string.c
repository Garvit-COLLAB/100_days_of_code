//Toggle case of each character in a string.

#include<stdio.h>
int main() {
    char str[1000];
    printf("Enter a string:");
    scanf("%[a-zA-Z]",str);
    
    for(int i=0;str[i]!='\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        } else {
            str[i]=str[i]+32;
        }
    }

    printf("%s",str);

    return 0;
}