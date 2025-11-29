/*Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include<stdio.h>
int main () {
     FILE *ptr;
     char ch;
     int char_count=0,word_count=0,line_count=0,word=0;

     ptr=fopen("info3.txt","r");
     if (ptr==NULL) {
         printf("Error in opening file.");
         return 1;
     }

   
     while((ch=fgetc(ptr))!=EOF){
         char_count++;

         if (ch =='\n')
             line_count++;

         if (ch==' ' || ch=='\n' || ch=='\t'){
             word=0;
         } else if (word ==0) {
             word=1;
             word_count++;
            }
        }

         line_count++;

     printf("characters:%d\nlines:%d\nwords:%d\n",char_count,line_count,word_count);

     fclose(ptr);

     return 0;
}