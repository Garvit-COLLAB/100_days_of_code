/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include<stdio.h>
int main () {
    FILE *ptr;
    char ch[1000];

   

    ptr=fopen("data.txt","a");
    if (ptr==NULL){
        printf("Error in opening file");
        return 1;
    }

    printf("Enter a input:");
    fgets(ch,sizeof(ch),stdin);

    fputs(ch,ptr);

    fclose(ptr);

    printf("File updated successfully with appended text.");

    return 0;
}