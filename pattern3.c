/*program to print the following pattern:
   1
   12
   123
   1234
   12345             */

#include<stdio.h>
int main () {
   for (int i=1;i<=5;i++) {

        for(int j=1;j<=i;j++){
            if (j==i){
                printf("%d\n",j);
            } else {
                printf("%d",j);
            }
        }
        
    }
    return 0;
}