/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and
writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include<stdio.h>
int main () {
    FILE *ptr;
    FILE *ptr1;
    int ch;

    ptr=fopen("input.txt","r");
     if(ptr==NULL){
        printf("Error in opening file");
        return 1;
    }
    ptr1=fopen("output.txt","w");
    if(ptr1==NULL){
        printf("Error in creating file");
        return 1;
    }

    while((ch=fgetc(ptr))!=EOF){
        if (ch >='a' && ch <='z'){
            ch -=32;
        }
        fputc(ch,ptr1);
    }

    fclose(ptr);
    fclose(ptr1);
    printf("File created successfully");

    return 0;
}