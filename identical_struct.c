/*Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include<stdio.h>
#include<string.h>
struct records{
    char name[50];
    int roll_no;
    int marks;
};

int main () {
    struct records s[2];

     for(int i=0;i<2;i++){
         printf("Enter name of student %d:",i+1);
         scanf("%s",s[i].name);

         printf("Enter roll no of student %d:",i+1);
         scanf("%d",&s[i].roll_no);

         printf("Enter marks of student %d:",i+1);
         scanf("%d",&s[i].marks);

     }

     int identical=1;

     for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++){
            if (i==j){
                continue;
            }
            if((strcmp(s[i].name,s[j].name)!=0) || (s[i].roll_no!=s[j].roll_no) || (s[i].marks!=s[j].marks)){
                 identical=0;
                 break;
            }
        } 
        if(!identical) {
            break;
        }

     }
     if(identical){
         printf("Your data is identical\n");
     } else {
        printf("Your data is not identical\n");
     }

     return 0;

}