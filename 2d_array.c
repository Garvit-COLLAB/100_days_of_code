//Read and print a matrix.

#include<stdio.h>
int main () {
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

     printf("matrix is:\n");
     for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}