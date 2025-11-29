//the sum of each row of a matrix and store it in an array.

#include<stdio.h>
int main(){
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

     int sum[r];

     for(int i=0;i<r;i++) {
         sum[i]=0;
         for(int j=0;j<c;j++) {
         sum[i] +=matrix[i][j];
         }
     }

     printf("Sum of row of matrix is:\n");
     for(int i=0;i<r;i++) {
         printf("%d row:%d\n",i+1,sum[i]);
     } 

    return 0;
}