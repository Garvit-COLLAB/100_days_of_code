#include<stdio.h>
#include<math.h>
int main(){
    int n,a;
    printf("Enter number:");
    scanf("%d", &n);
    a=n;
    int c=0;
   do{
    n = n / 10;
    ++c;
    }while (n>0);
    
    float b=0;
    n=a;
   do{
    int digit = n % 10;
    b +=pow(digit,c);
    n = n / 10;
   }while (n>0);

   if(a == b){
    printf("it is armstrong number(%d)",a);
   }else {
    printf("it is not armstrong number(%d)",a);
   }
  
    return 0;
}