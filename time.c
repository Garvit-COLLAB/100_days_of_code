// program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main (){
    int s;
    printf("Enter the number of seconds:");
    scanf("%d",&s);
    int h =s/3600;
    int m =(s%3600)/60;
    int sec = s - (h*3600 + m*60);

    printf("The time is %.2d hours, %.2d minutes and %.2d seconds\n",h,m,sec);
    printf("The time in 24 hour format is %.2d:%.2d:%.2d\n",h,m,sec);
    return 0;
}