//Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>
int main(){
 int r,c;
     printf("Enter the number of row:");
     scanf("%d",&r);
     printf("Enter the number of column:");
     scanf("%d",&c);
     int matrix[r][c];
     printf("Enter the element for matrix:");
    
     if(r!=c){
       printf("Invalid input!please enter square matrix");
       return 1;
     }
     for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
     }

     int sum =0;

     for(int i=0;i<r;i++) {
       sum +=matrix[i][i];
     }

     printf("Sum of diagonal element of matrix:%d",sum);

     return 0;
    }