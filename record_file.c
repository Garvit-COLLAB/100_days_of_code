/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include<stdio.h>
struct records{
    char name[50];
    int roll;
    int marks;
};

int main () {
    struct records s[2];
    FILE *ptr;
    int i=0;

    ptr=fopen("records.txt","w");
    if (ptr==NULL) {
        printf("Error in creating file\n");
        return 1;
    }

     for(int i=0;i<2;i++){
         printf("Enter name of student %d:",i+1);
         scanf("%s",s[i].name);

         printf("Enter roll no of student %d:",i+1);
         scanf("%d",&s[i].roll);

         printf("Enter marks of student %d:",i+1);
         scanf("%d",&s[i].marks);

         fprintf(ptr,"Name:%s, Roll no:%d, Marks:%d\n",s[i].name,s[i].roll,s[i].marks);
     }
    
     fclose(ptr);
     printf("File created successfully\n");

     ptr=fopen("records.txt","r");
     if (ptr==NULL) {
        printf("Error in opening file\n");
        return 1;
     }

     printf("student records\n");

     for(int i=0;i<2;i++) {
        fscanf(ptr,"Name:%[^,], Roll no:%d, Marks:%d",s[i].name,&s[i].roll,&s[i].marks);
        printf("Name:%s | Roll no:%d | Marks:%d\n",s[i].name,s[i].roll,s[i].marks);
     }

     fclose(ptr);
     return 0;

}