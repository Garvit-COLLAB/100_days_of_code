/*Q128: Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include<stdio.h>
int main () {
    FILE *ptr;
    char ch;
    char ab[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    int vowel=0,consonants=0;

    ptr =fopen("text.txt","r");
    if (ptr==NULL) {
        printf("Error in opening file");
        return 1;
    }
     
    while ((ch=fgetc(ptr))!=EOF){
         int true=1;

          if(!((ch >='a' && ch <='z') ||(ch>='A' && ch<='Z'))) 
             continue;
             
        for(int i=0;ab[i]!='\0';i++){
                 if(ch ==ab[i]) {
                     true=0;
                     break;
                 }
         }
         if(true){
             consonants++;
         } else {
             vowel++;
         }
     }

     fclose(ptr);
     printf("Vowel:%d\nConsonants:%d",vowel,consonants);
    return 0;
}