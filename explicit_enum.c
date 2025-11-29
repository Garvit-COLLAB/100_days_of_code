/*Q135: Assign explicit values starting from 10 and print them.

Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include<stdio.h>
#include<string.h>
enum values {A=10,B,C,D};
int main() {
  enum values var;

  for (var=A;var<=D;var++){
 switch(var) {
    case A:printf("A:%d\n",var);break;
    case B:printf("B:%d\n",var);break;
    case C:printf("C:%d\n",var);break;
    case D:printf("D:%d\n",var);break;
 }
  }
    return 0;
}