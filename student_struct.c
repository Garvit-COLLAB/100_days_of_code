/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include<stdio.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

int main () {
    struct records s;

     printf("Enter name of student:");
     scanf("%s",s.name);

     printf("Enter roll no of student:");
     scanf("%d",&s.roll_no);

     printf("Enter marks of student:");
     scanf("%d",&s.marks);

     printf("student records\n");

     printf("Name:%s | Roll:%d | Marks:%d\n",s.name,s.roll_no,s.marks);
    
     return 0;

}