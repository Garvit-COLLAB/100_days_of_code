/*Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include<stdio.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

int main () {
     struct records s;
     struct records *p;
     p=&s;

     printf("Enter name of student:");
     scanf("%s",p->name);

     printf("Enter roll no of student:");
     scanf("%d",&p->roll_no);

     printf("Enter marks of student:");
     scanf("%d",&p->marks);

     printf("student details\n");

     printf("Name:%s | Roll:%d | Marks:%d\n",s.name,s.roll_no,s.marks);

     

     printf("Enter a input to modify data---->\n");

     printf("Enter name of student:");
     scanf("%s",p->name);

     printf("Enter roll no of student:");
     scanf("%d",&p->roll_no);

     printf("Enter marks of student:");
     scanf("%d",&p->marks);

     printf("Modified Data\n");

     printf("Name:%s | Roll:%d | Marks:%d\n",p->name,p->roll_no,p->marks);

    
     return 0;

}