//program to check if a number is a perfect number.

#include<stdio.h>
int main (){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int perfect = 0;

   for(int i=1;i<n;i++){
     if( n%i == 0) {
        perfect += i;
     }    
    } 
    
   if(perfect == n) {
        printf("%d is a perfect number",n);
    } else {
        printf("%d is not a perfect number",n);
    }

    return 0;
}