//program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main () {
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    for(int i=2;i<=n;i++) {
     int prime =1;

      for(int j=2;j<i;j++){
       if(i % j == 0) {
      prime =0;
       }

      }
  
      if(prime){
        printf("%d ",i);
      }

    }
    return 0;
}