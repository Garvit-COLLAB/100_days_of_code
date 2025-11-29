/*Q117: Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include<stdio.h>
int main () {
    printf("Enter a sorted array");
    int m;
    printf("Enter a size of nums1 array:");
    scanf("%d",&m);
    int nums1[m];
    printf("Enter %d numbers for nums1:",m);

    for(int i=0;i<m;i++) {
        scanf("%d",&nums1[i]);
    }

    int n;
    printf("Enter a size of nums2 array:");
    scanf("%d",&n);
    int nums2[n];
    printf("Enter %d numbers for nums2:",n);

    for(int i=0;i<n;i++) {
        scanf("%d",&nums2[i]);
    }
    
    for(int i=0;i<m-1;i++) {
        if (nums1[i]>nums1[i+1]) {
            printf("Invaiid array");
            return 1;
        }
    }

     for(int i=0;i<n-1;i++) {
        if (nums2[i]>nums2[i+1]) {
            printf("Invaiid array");
            return 1;
        }
    }

    int merged[m+n];
    int j=0,k=0;

    for (int i=0;i<n+m;i++){\
         if(k>=n ||j<m && (nums1[j]<=nums2[k])) {
        merged[i]=nums1[j++];
         } else {
            merged[i]=nums2[k++];
         }
    }

    for(int i=0;i<m+n;i++) {
        printf(" %d",merged[i]);
    }
   

    return 0;
}