//Check if the elements on the diagonal of a matrix are distinct.

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

     int distinct=1;

      for (int i=0;i<r;i++){
        for (int j=i+1;j<c;j++){
         if( matrix[i][i]==matrix[j][j]){
            distinct=0;
            break;
         } 
        }
     }

     if(distinct) {
        printf("True;element on the diagonal are distinct");
     } else {
         printf("False;element on the diagonal are not distinct");
     }

    return 0;
}