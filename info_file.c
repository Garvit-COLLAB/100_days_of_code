/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include<stdio.h>
int main () {
    FILE *ptr;
    char data[200];

    ptr=fopen("info2.txt","r");
    if (ptr==NULL) {
        printf("Error in opening file.");
        return 1;
    }

    while(fgets(data,sizeof(data),ptr)!=EOF) {
        printf("%s",data);
    }

    fclose(ptr);
    return 0;
}