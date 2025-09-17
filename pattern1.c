/* program to print the following pattern:
     *****
     *****
     *****
     *****
     *****        */

#include<stdio.h>
int main () {
    for(int i =0;i<5;i++) {

     for (int j= 0;j<5;j++){
        if (j == 4){
            printf("*\n");
        } else{
        printf("*");
       }
    }
    
    }
    return 0;
}     

