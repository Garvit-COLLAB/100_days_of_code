#include<stdio.h>
int main(){
    int n,pro = 1,first =1;

    printf("Enter number:");
    scanf("%d",&n);
    
    printf("product of 1 to %d even number =",n);
    for (int i = 2;i <= n; i +=2) {
        pro *=i;
    }
        printf("%d(",pro);
     for (int i = 2;i <= n; i +=2){
     if(first)
     {  
        printf("%d",i);
     } 
     else 
     {
        printf(" * %d",i);
     }
     first = 0;
    }   
    printf(")");

    return 0;
}