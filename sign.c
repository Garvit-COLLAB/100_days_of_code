//program to input an integer and check whether it is positive, negative or zero using nested if–else.(integer numbers only)

#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);

    if (a>=0){
        if (a>0){
            printf("%d is positive integer.",a);
        } else {
            printf("%d is zero.(neither positive nor negative)",a);
        }
    }else {
        printf("%d is negative integer.",a);
    }
}