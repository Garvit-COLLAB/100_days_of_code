/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include<stdio.h>
#include<string.h>
enum traffic {RED,YELLOW,GREEN};
int main () {

     enum traffic t;
     char str[7];
     printf("Enter a one traffic light colour:");
     scanf("%s",str);
     if(strcmp(str,"RED")==0){
        t=RED;
     }else if(strcmp(str,"YELLOW")==0) {
        t=YELLOW;
     } else if (strcmp(str,"GREEN")==0) {
       t=GREEN;
     } else {
        printf("Invalid input");
        return 0;
     }
    
     switch (t)
     {
         case RED:printf("Stop");break;
         case YELLOW:printf("Wait");break;
         case GREEN:printf("Go");break;
    
     }

     return 0;
}