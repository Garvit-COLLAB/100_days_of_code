/*Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include<stdio.h>
#include<stdlib.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

int main () {
    struct records *s;

    s=(struct records *)malloc(sizeof(struct records));
    if (s==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

     printf("Enter name of student:");
     scanf("%s",s->name);

     printf("Enter roll no of student:");
     scanf("%d",&s->roll_no);

     printf("Enter marks of student:");
     scanf("%d",&s->marks);

     printf("student Details\n");

     printf("Name:%s | Roll:%d | Marks:%d\n",s->name,s->roll_no,s->marks);
    
     free(s);

     return 0;
}