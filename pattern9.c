/*program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *      */

#include<stdio.h>
int main () {

    printf("\n");
    
    for(int i=0;i<=3;i++) {

        for(int k=3;k>=i;k--) {
            printf(" ");
        }

        for(int j=1;j<=(2*i+1);j++) {
            if(j==(2*i+1)) {
                printf("*\n");
            } else {
                printf("*");
            }
        }

    }

    for(int i=3;i>0;i--) {

        for(int k=4;k>=i;k--) {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++) {
            if(j==(2*i-1)) {
                printf("*\n");
            } else {
                printf("*");
            }
        }

    }

    return 0;

}              
