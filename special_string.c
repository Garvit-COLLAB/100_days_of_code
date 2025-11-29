//Count spaces, digits, and special characters in a string.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    int length=0;
    int digit=0,spaces=0,special=0,less=0;

   while(str[length]!='\0'){
        length++;
    }

    for(int i=0;i<length;i++){
    
        if(str[i]>='0' && str[i]<='9'){
          digit++;
        } else if (str[i]==' ') {
           spaces++;
        } else if((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z')){
        less++;
        } else {
           special++;
        }
    }

  printf("In given string:\nDigit:%d Spaces:%d Special:%d",digit,spaces,special);

    return 0;
}