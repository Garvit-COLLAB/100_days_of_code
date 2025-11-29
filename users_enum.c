/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include<stdio.h>
#include<string.h>
enum users {ADMIN,USER,GUEST};
int main () {
    char input [10];
    printf("Enter your role:");
    scanf("%s",input);

    enum users role;

    if(strcmp(input,"ADMIN")==0){role=ADMIN;}
    else if(strcmp(input,"USER")==0){role=USER;} 
    else if(strcmp(input,"GUEST")==0){role=GUEST;}
    else {printf("Invalid input");return 1;}

    switch (role)
    {
    case ADMIN :printf("Welcome Admin!");break;
    case USER :printf("Welcome user!");break; 
    case GUEST :printf("Welcome guest!");break;
    }

    return 0;
}