 /* program to print the following pattern:
    5
    45
    345
    2345
    12345   */

#include<stdio.h>
int main () {
    for(int i=5;i>0;i--){

        for(int j=i;j<=5;j++){
            if(j==5) {
                printf("%d\n",j);
            } else {
                printf("%d",j);
            }
        }
        
    }
    return 0;
}    