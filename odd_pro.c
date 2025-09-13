#include<stdio.h>
int main(){
   int n,pro =1,rev =0,first =1;
   printf("enter number:");
   scanf("%d",&n);

   printf("product of odd digits in %d:",n);

  while(n>0){
    int a;
    a = n%10;
    if(a%2 !=0){
        pro *=a;
    }
    rev=rev*10+a;
    n =n/10;
   }

printf("%d",pro);

  while(rev>0){
    int b;
    b = rev % 10;
      if(b%2 !=0){
        if(first){
            printf("(%d",b);
            first =0;
        } else {
            printf(" * %d",b);
        }
    }
     rev = rev / 10;
  }

  if(pro == 1) {
  printf("(no odd digits,assume 1)\n"); 
  } else {
  printf(")\n");
  }
    return 0;
}