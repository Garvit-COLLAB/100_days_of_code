/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include<stdio.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

void print(struct records s);

int main () {
    struct records s;

     printf("Enter name of student:");
     scanf("%s",s.name);

     printf("Enter roll no of student:");
     scanf("%d",&s.roll_no);

     printf("Enter marks of student:");
     scanf("%d",&s.marks);

     print(s);
     return 0;

}

void print(struct records s) { 
     printf("student records\n");
     printf("Name:%s | Roll:%d | Marks:%d\n",s.name,s.roll_no,s.marks);
}
