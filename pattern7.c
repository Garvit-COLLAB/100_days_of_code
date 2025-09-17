/* program to print the following pattern:

    *

    *
    *
    * 

    *
    *
    *
    *
    *

    *
    *
    *

    *        */

#include<stdio.h>
int main () {
    for(int i=1;i<=3;i++) {

        for(int j=3;j<=(2*i+1);j++) {
            
            if (j==(2*i+1)) {
                printf("*\n\n");
            } else {
                printf("*\n");
            }
        }
      
    }

    for(int i=1;i>=0;i--) {

        for(int j=1;j<=(2*i+1);j++) {
              if (j==(2*i+1)) {
                printf("*\n\n");
            } else {
                printf("*\n");
            }
        }

    }
    return 0;
    
}    