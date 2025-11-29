//Perform diagonal traversal of a matrix.

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


     for(int i=0;i<r+c-1;i++){
        int temp=0;
        int t[r+c];
        for(int k=0 ;k<r;k++){
         int j=i-k;
         if(j>=0 && j<c) {
        t[temp++]=matrix[k][j]; 
         }
        }
       if(i%2==0) {
        for(int a=temp-1;a>=0;a--)
        printf(" %d",t[a]);
       } else {
        for(int b=0;b<temp;b++){
            printf(" %d",t[b]);
        }
      }
     }

    return 0;
}