//Insert an element in a sorted array at the appropriate position.

#include<stdio.h>
int main () {
    int n;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    printf("please give sorted input!\n");
    int arr[n];
    printf("Enter %d numbers:",n);

    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int insert;
    printf("Enter an number insert in array:");
     scanf("%d",&insert);
    
    int new[n+1];
    int pos=n;

    for(int i=0;i<n;i++) {
      if(arr[i]>insert){
        pos=i;
        break;
      }
    }
   
    for(int i=0;i<n+1;i++){
      if(i<=pos){
        if(i<pos){
        new[i]=arr[i];
        } else {
          new[i]=insert;
        } }
        else {
          new[i]=arr[i-1];
        }
      }

    for (int i=0;i<n+1;i++) {
        printf("%d ",new[i]);
    }

    printf("\n");
   
    return 0;
}