/*Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include<stdio.h>
enum integer {SUCCESS,FAILURE,TIMEOUT};
int main () {
    enum integer s;
    const char *names[]={"SUCCESS","FAILURE","TIMEOUT"};

    for (s=SUCCESS;s<=TIMEOUT;s++) {
        printf("%s=%d\n",names[s],s);
    }
    return 0;
}