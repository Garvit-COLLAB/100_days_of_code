//program to assign grades based on a percentage input.

#include<stdio.h>
int main() {
    int a;
    printf("Enter the percentage obtained by you:");
    scanf("%d",&a);
     
if (a >= 90 && a <= 100){
        printf("Your grade is A.");
    }else if (a >= 80 && a < 90){
        printf("Your grade is B.");
    }else if (a >= 70 && a < 80){
        printf("Your grade is C.");
    }else if (a >=50 && a < 70){
        printf("Your grade is D.");
    }else if (a >= 0 && a < 50){
        printf("Your grade is F.");
    }
    return 0;  
}




