//The sum of all elements in a matrix.

#include<stdio.h>
int main (){
     int r,c;
     printf("Enter the number of row:");
     scanf("%d",&r);
     printf("Enter the number of column:");
     scanf("%d",&c);
     int matrix[r][c];
     printf("Enter the element for matrix:");
    
     for (int i=0;i<r;i++){
         for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
         }
     }

     int sum=0;

     for(int i=0;i<r;i++) {
         for(int j=0;j<c;j++) {
         sum +=matrix[i][j];
        }
     }

     printf("Sum of all element of matrix:%d",sum);
    return 0;
}