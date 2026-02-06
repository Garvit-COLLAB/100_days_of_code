// program to calculate the area and perimeter of a rectangle given its length and breadth.(integer number only)

#include <stdio.h>
int main() {
    int l,b;
    printf("Enter the length of rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);

    printf("The perimeter of rectangle:%d\n", 2*(l+b));
    printf("The area of rectangle:%d\n",l*b);

    return 0;
}
