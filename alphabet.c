//program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main() {
    char alphabet;

    printf("Enter your chosen alphabet:");
    scanf("%c",&alphabet);

    if((alphabet >= 'a' && alphabet <= 'z')||(alphabet >= 'A' && alphabet <= 'Z')){
         if(alphabet == 'a' || alphabet == 'A' ||
        alphabet == 'e' || alphabet == 'E' || alphabet == 'i' ||
    alphabet == 'I' || alphabet == 'o' || alphabet == 'O' ||
             alphabet == 'u' || alphabet == 'U'){
                printf(" %c is an vowel.\n",alphabet);
             }else{
                printf(" %c is a consonant.\n",alphabet);
             }
    }else{
        printf("invalid input");
    }



    return 0;
}