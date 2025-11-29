//Check if a string is a palindrome.

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
     int check=1;
    
     for(int i=0;i<count;i++){
         if(str[i]!=reverse[i]){
            check=0;
         }
     }

     if(check){
        printf("Given string is a palindrome");
     } else {
        printf("Given string is not a palindrome");
     }

    return 0;
}