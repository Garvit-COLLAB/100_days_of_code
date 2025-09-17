/* program to print the following pattern:
    *
    **
    ***
    ****
    *****          */

#include<stdio.h>
int main() {
    for (int i=0;i<5;i++) {

        for(int j=0;j<=i;j++){
            if (j==i){
                printf("*\n");
            } else {
                printf("*");
            }
        }
        
    }
    return 0;
}