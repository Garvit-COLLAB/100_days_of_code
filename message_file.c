
/*Q121: Write a C program that creates a text file named info.txt in write mode.
The program should take the user’s name and age as input, and write them to the file using fprintf().
After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include<stdio.h>
int main () {
    FILE *ptr;
    char str[100];

    printf("Enter an input:");
    fgets(str,sizeof(str),stdin);

    ptr=fopen("info1.txt","w");
    if(ptr==NULL){
        printf("Error in creating file.\n");
        return 1;
    }

    fputs(str,ptr);
    fclose(ptr);

    printf("File created successfully!Data written to info.txt\n");
 
    return 0;
}