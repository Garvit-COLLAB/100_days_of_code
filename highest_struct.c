/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/


#include<stdio.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

int main () {
    struct records s[3];

     for(int i=0;i<3;i++){
         printf("Enter name of student %d:",i+1);
         scanf("%s",s[i].name);

         printf("Enter roll no of student %d:",i+1);
         scanf("%d",&s[i].roll_no);

         printf("Enter marks of student %d:",i+1);
         scanf("%d",&s[i].marks);

     }

     int max=s[0].marks;
     int sr_no=0;

     for(int i=1;i<3;i++) {
         if (s[i].marks>max){
             max=s[i].marks;
             sr_no=i;
         }
     }

     printf("Topper: %s(Marks:%d)\n",s[sr_no].name,s[sr_no].marks);

     return 0;
    }