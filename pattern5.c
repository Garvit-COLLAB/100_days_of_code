/* program to print the following pattern:
    *****
     ****
      ***
       **
        *       */

#include<stdio.h>
int main () {
   for (int i=5;i>=1;i--) {
    
    for(int k=i;k<=5;k++){
        printf(" ");
    }

        for(int j=1;j<=i;j++){
            if (j==i){
                printf("*\n");
            } else {
                printf("*");
            }
        }
    }
    return 0;
}