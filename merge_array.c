//Merge two arrays.

#include<stdio.h>
int main() {
    int n1;
    printf("Enter the number of inputs for arr1:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter %d numbers:",n1);

    for(int i=0;i<n1;i++) {
       scanf("%d",&arr1[i]);
    }

    int n2;
    printf("Enter the number of inputs for arr2:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter %d numbers:",n2);

    for(int i=0;i<n2;i++) {
       scanf("%d",&arr2[i]);
    }

    int merge[((n1+n2)-1)];
    int count=0;
   
    for(int i=0;i<n1;i++) {
       merge[i]=arr1[i];
       count++;
    }

    for(int i=0;i<n2;i++) {
       merge[count]=arr2[i]; 
       count++;     
    }

    printf("Merge of both arr is:");
    for (int i=0;i<count;i++) {
        printf("%d ",merge[i]);
    }


   return 0;
}