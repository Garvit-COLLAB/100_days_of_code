//program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a+b > c && b+c > a && c+a > b){
        if(a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        } else if (a == b || b == c || c == a) {
            printf("Triangle is Isosceles.\n");
        } else {
            printf("Triangle is Scalene.\n");
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}