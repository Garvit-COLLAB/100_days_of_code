/*Q124: Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include<stdio.h>
int main () {
    FILE *ptr;
    FILE *ptr2;
    int ch;

    ptr=fopen("source.txt","r");
    if (ptr==NULL) {
         printf("Error in opening file.");
         return 1;
     }

    ptr2=fopen("destination.txt","w");
    if (ptr2==NULL) {
         printf("Error in creating file.");
         fclose(ptr);
         return 1;
     }

    while((ch=fgetc(ptr))!=EOF){
        fputc(ch,ptr2);
    }
    
    fclose(ptr);
    fclose(ptr2);
    printf("File copied successfully to destination.txt");

    return 0;
}