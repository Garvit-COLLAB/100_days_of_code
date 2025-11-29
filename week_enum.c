/*Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include<stdio.h>
enum day {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

int main () {
    enum day d;
    for(d=SUNDAY;d<=SATURDAY;d++) {
        switch (d)
        {
        case SUNDAY:printf("SUNDAY:%d\n",d);break;
        case MONDAY:printf("MONDAY:%d\n",d);break;
        case TUESDAY:printf("TUESDAY:%d\n",d);break;
        case WEDNESDAY:printf("WEDNESDAY:%d\n",d);break;
        case THURSDAY:printf("THURSDAY:%d\n",d);break;
        case FRIDAY:printf("FRIDAY:%d\n",d);break;
        case SATURDAY:printf("SATURDAY:%d\n",d);break;
        }
    }

    return 0;

}