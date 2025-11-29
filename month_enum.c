/*Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include<stdio.h>
#include<string.h>
enum months{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
int main () {
    char input[4];
    printf("Enter a month:");
    scanf("%s",input);
    enum months day;
    if (strcmp(input,"JAN")==0){day=JAN;} 
    else if(strcmp(input,"FEB")==0) {day=FEB;}
    else if(strcmp(input,"MAR")==0) {day=MAR;}
    else if(strcmp(input,"APR")==0) {day=APR;}
    else if(strcmp(input,"MAY")==0) {day=MAY;}
    else if(strcmp(input,"JUN")==0) {day=JUN;}
    else if(strcmp(input,"JUL")==0) {day=JUL;}
    else if(strcmp(input,"AUG")==0) {day=AUG;}
    else if(strcmp(input,"SEP")==0) {day=SEP;}
    else if(strcmp(input,"OCT")==0) {day=OCT;}
    else if(strcmp(input,"NOV")==0) {day=NOV;}
    else if(strcmp(input,"DEC")==0) {day=DEC;}
    else  {printf("Invalid input");return 1; }

    switch (day){
         case JAN:printf("31 days");break;
         case FEB:printf("28 or 29 days");break;
         case MAR:printf("31 days");break;
         case APR:printf("30 days");break;
         case MAY:printf("31 days");break;
         case JUN:printf("30 days");break;
         case JUL:printf("31 days");break;
         case AUG:printf("31 days");break;
         case SEP:printf("30 days");break;
         case OCT:printf("31 days");break;
         case NOV:printf("30 days");break;
         case DEC:printf("31 days");break;
    }

    return 0;
}