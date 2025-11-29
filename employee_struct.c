/*Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include<stdio.h>
struct date{
        int day;
        int month;
        int year;
    };
struct office{
    char employee[50];
    int id;
    struct date join;
};

int main () {
     struct office e;

     printf("Enter name of employee:");
     scanf("%s",e.employee);

     printf("Enter id of employee:");
     scanf("%d",&e.id);

     printf("Enter joining date:");
     scanf("%d %d %d",&e.join.day,&e.join.month,&e.join.year);

     printf("Employee records\n");

     printf("Name:%s | ID:%d | Joining date:%d/%d/%d\n",e.employee,e.id,e.join.day,e.join.month,e.join.year);
    
     return 0;

}