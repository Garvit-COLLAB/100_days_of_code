//program to input an integer and check whether it is even or odd using if–else.(integer numbers only)

#include<stdio.h>
int main (){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);

    if ((a%2)==0){
        printf("%d is an even integer.",a);
    } else {
        printf("%d is an odd integer.",a);
    }
    return 0;
}
 


