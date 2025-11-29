//Check if two strings are anagrams of each other.

#include<stdio.h>
int main () {
     int freq1[256]={0};
     int freq2[256]={0};

     char str1[1000];
     printf("Enter a string1:");
     scanf("%s",str1);
     int length1=0;

     char str2[1000];
     printf("Enter a string2:");
     scanf("%s",str2);
     int length2=0;
     int anagram=1;
    

     for(int i=0;str1[i]!='\0';i++){
       length1++;
     }
    
     for(int i=0;str2[i]!='\0';i++){
        length2++;
     }

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