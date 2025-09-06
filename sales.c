
// program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float sp,cp;
    printf("Enter selling price and cost price respectively:");
    scanf("%f %f", &sp, &cp);

    if(sp > cp){
        printf("Profit %.0f%%\n",((sp-cp) / cp) * 100);
    } else if (sp < cp){
        printf("Loss %.0f%%\n",((cp-sp) / cp) * 100);
    } else {
        printf("No Loss No Profit.\n");
    }
    return 0;
}