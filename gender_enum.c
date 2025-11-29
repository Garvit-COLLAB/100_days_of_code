/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include<stdio.h>
#include<string.h>
struct per{
    enum gender{MALE,FEMALE}g;
};

int main(){
     char input[8];
     printf("Enter your gender:");
     scanf("%s",input);
     struct per hs;

     if(strcmp(input,"MALE")==0) {hs.g=MALE;}
     else if(strcmp(input,"FEMALE")==0) {hs.g=FEMALE;}
     else {printf("Invalid input"); return 1;}

     switch (hs.g)
     {
     case MALE:printf("Gender:Male\n");break;
     case FEMALE:printf("Gender:female");break;
     }
}
