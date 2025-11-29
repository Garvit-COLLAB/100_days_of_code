/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/

#include<stdio.h>
int main () {
    FILE *ptr;
    char ch[1000];
    printf("Enter a file name:");
    scanf("%s",ch);

    ptr = fopen(ch,"r");
    if(ptr==NULL){
        printf("Error:File does not exist\n");
        return 1;
    } else {
        printf("File opened successfully\n");
    }

    while(fgets(ch,sizeof(ch),ptr)!=NULL) {
       puts(ch);
    }

    fclose(ptr);
    return 0;
}