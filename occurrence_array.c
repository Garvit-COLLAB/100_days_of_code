/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
 The elements in the sorted array might be repeated. 
 You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
 Print -1, -1 if the target is not present.*/

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int main() {
    int nums[100], n = 0, target;
    char ch;

    printf("Enter a input");
    while (scanf("%c", &ch) == 1) {
        if (ch == '[') {                     
            while (1) {
                if (scanf("%d", &nums[n]) != 1)
                 break;
                 n++;
                scanf("%c", &ch);
                if (ch == ']') break;           
            }
        }
        if (ch == '=') {                      
            if (scanf("%d", &target) == 1) break;
        }
    }

    int first = -1, last = -1;
    int lo = 0, hi = n - 1;

    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) {
            first = mid;
            hi = mid - 1;                    
        } else if (nums[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    
    lo = 0; hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) {
            last = mid;
            lo = mid + 1;                    
        } else if (nums[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}
