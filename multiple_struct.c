/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include<stdio.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

int main () {
    struct records s[5];

     for(int i=0;i<5;i++){
         printf("Enter name of student %d:",i+1);
         scanf("%s",s[i].name);

         printf("Enter roll no of student %d:",i+1);
         scanf("%d",&s[i].roll_no);

         printf("Enter marks of student %d:",i+1);
         scanf("%d",&s[i].marks);

     }

     printf("student records\n");

     for(int i=0;i<5;i++) {
         printf("Name:%s | Roll no:%d | Marks:%d\n",s[i].name,s[i].roll_no,s[i].marks);
     }

     return 0;

}