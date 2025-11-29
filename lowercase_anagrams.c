/*Write a program to take two strings s and t as inputs (assume all characters are lowercase).
 The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies.
Print "Anagram" if they are, otherwise "Not Anagram".  */

#include<stdio.h>
#include<string.h>
int main () {
     int freq1[256]={0};
     int freq2[256]={0};

     char str1[1000];
     printf("Enter a string1:");
     scanf("%[a..z]",str1);
     int length1=strlen(str1);

     char str2[1000];
     printf("Enter a string2:");
     scanf("%[a..z]",str2);
     int length2=strlen(str2);
     int anagram=1;
    

    

     if(length1!=length2){
        printf("Invalid string!Enter string of same dimensions");
     } else {
        for(int i=0;i<length1;i++){
            freq1[(int)str1[i]]++;
            freq2[(int)str2[i]]++;
        }

        for(int i=0;i<256;i++){
            if(freq1[i]!=freq2[i]){
             anagram=0;
             break;
            }
        }
     }

     if (anagram==1)  {
      printf("Give string is anagram");
     } else {
        printf("given string is not anagram");
     }
    return 0;
}