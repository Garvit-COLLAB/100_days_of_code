//Find the first repeating lowercase alphabet in a string.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    char character=0;
    int count=0;

    for(int i=0;str[i]!='\0';i++){
      count++;
    }

    for(int i=0;i<count;i++){
        int t=0;
        for(int j=0;j<count;j++){
          if (str[i]==str[j] && str[i]>='a' && str[i]<='z'){
            t++;
          }
        }
        if(t>1){
            character=str[i];
            break;
        }
    }
    if(character!=0){
    printf("First repeating lowercase letter in given string is:%c",character);
    } else {
        printf("No repeating lowercase letter are found");
    }

}