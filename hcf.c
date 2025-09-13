#include<stdio.h>
int main () {
    int n1, n2;
    printf("Enter number:");
    scanf("%d %d", &n1, &n2);
    int b1,b2;
    int hcf =1;

   for(int i =1;i<=n1;i++) {
    b1 = n1 % i;
    b2 = n2 % i;

    if(b1==0 && b2 ==0){
     hcf =i;}
     
    }
  printf("hcf of %d and %d:%d", n1, n2, hcf);
  
    return 0;
}