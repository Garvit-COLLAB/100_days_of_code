//Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include<stdio.h>
#include<string.h>

int main () {
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    int n=strlen(str);
    if (str[n-1]=='\n') {
       str[n-1]='\0';
       n--;
    }

    int max=0;
    for(int i=0;i<n;i++) {
        int repeat[256]={0};
        int current=0;

        for(int j=i;j<n;j++) {
            unsigned char c=str[j];

            if (repeat[c]) {
            break;
            }

           repeat[c]=1;
            current++;
        }

        if(current>max) {
            max=current;
        }
    }
    
    printf("length of the longest substring without repeating characters:%d",max);
  
    return 0;
}