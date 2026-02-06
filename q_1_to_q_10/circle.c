//program to calculate the area and circumference of a circle given its radius.(real number only)

#include <stdio.h>
int main() {
    float r;
    printf("Enter the radius of circle:");
    scanf("%f",&r);

    printf("The circumference of circle:%.2f\n",2*3.14*r);
    printf("The area of circle:%.2f\n",3.14*r*r);

    return 0;
}
