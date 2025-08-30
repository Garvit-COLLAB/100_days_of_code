//program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
//but it take only single character.

#include<stdio.h>
int main(){
    char check;
    printf("Enter any character:");
    scanf(" %c",&check);

     if(check >= 'A' && check <= 'Z'){
        printf("%C is a UPPERCASE ALPHABET.\n",check);
     }else if (check >= 'a' && check <= 'z'){
        printf("%C is a lowercase alphabet.",check);
     }else if(check >= '1' && check <= '9'){
        printf("%C is a digit.",check);
     }else {
        printf("%C is a special character.",check);
     }
      
    return 0;

}