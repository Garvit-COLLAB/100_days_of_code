//Add two matrices.

#include<stdio.h>
int main () {
     int r1,c1;
     printf("Enter the number of row:");
     scanf("%d",&r1);
     printf("Enter the number of column:");
     scanf("%d",&c1);
     int matrix1[r1][c1];
     printf("Enter the element for matrix:");
    
     for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&matrix1[i][j]);
        }
     } int r2,c2;
     printf("Enter the number of row:");
     scanf("%d",&r2);
     printf("Enter the number of column:");
     scanf("%d",&c2);
     int matrix2[r2][c2];
     printf("Enter the element for matrix:");
    
     for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&matrix2[i][j]);
        }
     }

     int sum[r1][c1];

     if (r1!=r2 && c1!=c2) {
         printf("invalid input for sum of matrix");
         return 1;
     }
     for(int i=0;i<r1;i++) {
         for(int j=0;j<c1;j++) {
            sum[i][j]=matrix1[i][j] + matrix2[i][j];
        }
     }

     printf("Sum of these two matrix is:\n");

     for(int i=0;i<r1;i++) {
         for(int j=0;j<c1;j++) {
         printf(" %d",sum[i][j]);
         }
         printf("\n");
        }

    return 0;
}