/*Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include<stdio.h>
int main () {
     FILE *ptr;
     int arr[100];
     int sum=0,i=0;
     float average;

    
     ptr=fopen("number.txt","r");

     while(fscanf(ptr,"%d",&arr[i])==1){
        sum +=arr[i];
        i++;
     }

     fclose(ptr);

     if(i>0) {
         average=(float)sum/i;
         printf("Sum:%d\n",sum);
         printf("Average:%.2f\n",average);
     } else {
         printf("no numbers found\n");
     }

    return 0;
}