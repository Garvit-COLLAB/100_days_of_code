//Multiply two matrices.

#include<stdio.h>
int main () {
int r1,c1;
     printf("Enter the number of row for 1st matrix:");
     scanf("%d",&r1);
     printf("Enter the number of column for 1st matrix:");
     scanf("%d",&c1);
     int m1[r1][c1];
     printf("Enter the element for 1st matrix:");
    
     for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);
        }
     }

     int r2,c2;
     printf("Enter the number of row for 2nd matrix:");
     scanf("%d",&r2);
     printf("Enter the number of column for 2nd matrix:");
     scanf("%d",&c2);
     int m2[r2][c2];
     printf("Enter the element for 2nd matrix:");
    
     for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&m2[i][j]);
        }
     }

     if(r1!=c2) {
        printf("Invalid matrix order!please enter same number of row1 and column2 for matrix order");
        return 1;
     }

     int p[r1][c2];

     for(int i=0;i<r1;i++){
        for(int k=0;k<c2;k++){
            p[i][k]=0;
        }
     }

     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) {
             for(int k=0;k<c1;k++){
             p[i][j] += m1[i][k]*m2[k][j];
            }
        }
     }

     printf("product of two matrix is:\n");

     for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++){
            printf(" %d",p[i][j]);
        }
         printf("\n");
     }
    return 0;
}