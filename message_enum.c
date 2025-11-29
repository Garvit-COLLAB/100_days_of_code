/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include<stdio.h>
#include<string.h>
enum message {SUCCESS,FAILURE,TIMEOUT};
int main () {
     char input[8];
     printf("Enter a operation message:");
     scanf("%s",input);
     enum message t;

     if(strcmp(input,"SUCCESS")==0) {t=SUCCESS;}
     else if(strcmp(input,"FAILURE")==0) {t=FAILURE;}
     else if(strcmp(input,"TIMEOUT")==0) {t=TIMEOUT;}
     else {printf("Invalid input"); return 1;}

     switch (t)
     {
     case SUCCESS:printf("Operation successful");break;
     case FAILURE:printf("Operation Failed");break;
     case TIMEOUT:printf("Operation Time Complete");break;
     }

     return 0;
}