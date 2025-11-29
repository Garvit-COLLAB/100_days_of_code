//Count vowels and consonants in a string.

#include<stdio.h>
int main() {
     char str[1000];
     printf("Enter a string:");
     scanf("%s",str);
     char vowel[]={'a','i','o','u','e','A','E','I','O','U'};
     int v=0,c=0;

     for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z')){
            int a=0;
             for(int j=0;j<10;j++){
                 if(str[i]==vowel[j]){
                 v++;
                 a=1;
                 break;
                 }
             } 
        if (a==0){
            c++;
         }
         }
     }
    
     printf("Vowel:%d\tConsonants:%d",v,c);
}