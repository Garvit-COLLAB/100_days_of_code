//Find the digit that occurs the most times in an integer number.

#include<stdio.h>
int main () {
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d numbers:",n);

    for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
    }
 
    int t=0;
    int fre[n];
    for(int i=0;i<n;i++){
        t=0;
        for(int k=0;k<n;k++){
            if (arr[i]==arr[k]){
            t++;
            } 
        }
        fre[i]=t;
    }
   
    int max=fre[0];
    int most=arr[0];
    for(int i=0;i<n;i++){
       if(fre[i]>max){
        max=fre[i];
        most=arr[i];
       }
    }

    printf("The most occurred integer in this array:%d",most);
    return 0;
}