/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

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
     FILE *ptr;

     ptr=fopen("Employee.dat","wb");
     if(ptr==NULL) {
        printf("error in opening file for writing.\n");
        return 1;
     }

     printf("Enter name of employee:");
     scanf("%s",e.employee);

     printf("Enter id of employee:");
     scanf("%d",&e.id);

     printf("Enter joining date:");
     scanf("%d %d %d",&e.join.day,&e.join.month,&e.join.year);

     fwrite(&e,sizeof(struct office),1,ptr);
     
     fclose(ptr);

     ptr=fopen("employee.dat","rb");
     if(ptr==NULL) {
        printf("error in opening file for reading.\n");
        return 1;
     }

     fread(&e,sizeof(struct office),1,ptr);
     fclose(ptr);

     printf("Employee detalis read from file:\n");
     printf("Name:%s | ID:%d | Joining date:%d/%d/%d\n",e.employee,e.id,e.join.day,e.join.month,e.join.year);

     return 0;
}