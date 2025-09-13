#include<stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int binary=0;
    int a;
    while(n>0){
    binary = binary*10 +(n % 2);
    n = n / 2;
    a++;
    }
    
  while(a>0){
   printf("%d",binary%10);
   binary =binary / 10;
   a--;
  }
    return 0;
}