// program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main (){
    int month;
    printf("what month number?\n");
    printf("January:1\nFebruary:2\nMarch:3\nApril:4\n");
    printf("May:5\nJune:6\nJuly:7\nAugust:8\n");
    printf("September:9\nOctober:10\nNovember:11\nDecember:12\n");
    printf("Enter your month Number:");
    scanf("%d",&month);

    switch (month){
        case 1:
        printf("January, 31 days\n");
        break;
        case 2:
        printf("February, 28 days\n");
        break;
        case 3:
        printf("March, 31 days\n");
        break;
        case 4:
        printf("April, 30 days\n");
        break;
        case 5:
        printf("May, 31 days\n");
        break;
        case 6:
        printf("June, 30 days\n");
        break;
        case 7:
        printf("July, 31 days\n");
        break;
        case 8:
        printf("August, 31 days\n");
        break;
        case 9:
        printf("September, 30 days\n");
        break;
        case 10:
        printf("October, 31 days\n");
        break;
        case 11:
        printf("November, 30 days\n");
        break;
        case 12:
        printf("December, 31 days\n");
        break;
        default:
        printf("Not a valid number of month.\n");
    }

    return 0;
}