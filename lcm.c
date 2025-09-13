#include<stdio.h>
int main () {
    int n1, n2,b;
    printf("Enter number:");
    scanf("%d %d", &n1, &n2);
   b =(n1<n2)? n2:n1;
   
  printf("lcm of %d and %d:", n1, n2);
   for(int i =b; i<= n1*n2; i++) {
    if(i % n1 == 0 && i % n2 == 0 ){
        printf("%d",i);
        break;
    }
}

  
    return 0;
}