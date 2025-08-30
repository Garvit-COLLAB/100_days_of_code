//program to find and display the sum of the first n natural numbers

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

     printf("The sum of first %d natural numbers is:%d\n",n,(n*(n+1))/2);
     return 0;
}
