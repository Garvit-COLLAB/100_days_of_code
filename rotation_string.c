//Check if one string is a rotation of another.

#include<stdio.h>
#include<string.h>
int main () {
    char str1[1000];
    printf("Enter 1st string:");
    scanf("%s",str1);
    char str2[1000];
    printf("Enter 2nd string:");
    scanf("%s",str2);

    if(strlen(str1)!=strlen(str2)){
        printf("invalid string!");
        return 1;
    }

    char temp[2000];
    strcpy(temp,str1);
    strcat(temp,str1);

    if(strstr(temp,str2)!=NULL){
        printf("String is in rotation");
    } else {
        printf("String is not in rotation");
    }

    return 0;
}