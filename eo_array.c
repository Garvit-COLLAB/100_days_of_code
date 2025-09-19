//Count even and odd numbers in an array.

#include<stdio.h>
int main() {
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    int number[n];
    printf("Enter %d numbers:",n);
    int even = 0;
    int odd = 0;


    for(int i=0;i<n;i++) {
        scanf("%d",&number[i]);

        if(number[i]%2 == 0) {
        even += 1;
        } else {
        odd +=1;
        }
    }

    printf("Total even numbers:%d\n",even);
    printf("Total odd numbers:%d\n",odd);

    return 0;
}