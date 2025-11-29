/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include<stdio.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

struct records topper(struct records s[],int n);

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

     struct records max= topper(s,3);
     printf("Topper\nName:%s | Roll:%d | Marks:%d\n",max.name,max.roll_no,max.marks);

     return 0;
    }
    struct records topper(struct records s[],int n) {
     int max=s[0].marks;
     int sr_no=0;

     for(int i=1;i<3;i++) {
         if (s[i].marks>max){
             max=s[i].marks;
             sr_no=i;
         }
     }
     
     return s[sr_no];
    }