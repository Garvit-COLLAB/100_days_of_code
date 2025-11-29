//Reverse each word in a sentence without changing the word order

#include<stdio.h>
#include<string.h>
int main () {
     char str[1000];
     printf("Enter a sentence:");
     scanf("%[^\n]",str);
     char sentence[100][1000];
     int s_i=0,w_i=0;
     for (int i=0;i<strlen(str);i++) {
     if (str[i]!=' '){
       sentence[s_i][w_i]=str[i];
       w_i++;
       } else {
        sentence[s_i][w_i]='\0';
        w_i=0;
        s_i++;
       }
    }
    sentence[s_i][w_i]='\0';
    int s_c=s_i+1;

    for(int i=0;i<s_c;i++){
        strrev(sentence[i]);
        printf("%s ",sentence[i]);
    }


    return 0;
}