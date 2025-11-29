//Find the longest word in a sentence.

#include<stdio.h>
int main () {
    char str[1000];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    char sentence[100][1000];
    int s_i=0,c_i=0;

    for (int i=0;str[i]!='\0';i++) {
       if (str[i]!=' '){
       sentence[s_i][c_i]=str[i];
       c_i++;
       } else {
        sentence[s_i][c_i]='\0';
        c_i=0;
        s_i++;
       }
    }
    sentence[s_i][c_i]='\0';
    int w_i=s_i+1;
    int count[w_i];
    int max=0;
    char *largest=sentence[0];

        for (int i=0;i<w_i;i++) {
            count[i]=0;
        for(int j=0;sentence[i][j]!='\0';j++){
         count[i]++;
        }
        
         if (count[i]>max){
            max=count[i];
            largest=sentence[i];
        } }

     printf("%s",largest);
        return 0;
     }  
