/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include<stdio.h>
#include<string.h>
enum names {RED,YELLOW,GREEN};
int main() {
  enum names colour;

  for (colour=RED;colour<=GREEN;colour++){
 switch(colour) {
    case RED:printf("RED=%d\n",colour);break;
    case YELLOW:printf("YELLOW=%d\n",colour);break;
    case GREEN:printf("GREEN=%d\n",colour);break;
 }
  }
    return 0;
}