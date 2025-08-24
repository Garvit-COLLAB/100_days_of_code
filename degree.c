//program to convert temperature from Celsius to Fahrenheit.(real number only)

#include<stdio.h>
int main(){
    float C;
    printf("Enter the value of temperature in celsius:");
    scanf("%f",&C);
    printf("The temperature in fahrenheit:%.4f\n",(9*C)/5+32);

    return 0;
}