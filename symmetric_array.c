//Check if a matrix is symmetric.

#include<stdio.h>
int main (){ 
    int r,c;
     printf("Enter the number of row:");
     scanf("%d",&r);
     printf("Enter the number of column:");
     scanf("%d",&c);
     int matrix[r][c];
     printf("Enter the element for matrix:");

     if(r!=c) {
       printf("invalid input!please enter square matrix");
       return 1;
     }

     for (int i=0;i<r;i++){
         for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
         }
     }
    //it can also be done by swaping row and column value or also just interchange variable in loop

     int valid=1;

     for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            if (matrix[i][j]!=matrix[j][i]){
              valid=0;
            }
        }
     }

     if(valid) {
         printf("True;matrix is symmetric.");
     } else {
         printf("false;matrix is asymmetric.");
     }


     return 0;
    }