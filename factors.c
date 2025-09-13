#include<stdio.h>
int main () {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int b;
    printf("factors of %d:",n);

    for(int i =1;i<=n;i++) {
       b = n % i;
      if (b == 0){
        printf("%d ",i);
      } 
    }
    return 0;
}