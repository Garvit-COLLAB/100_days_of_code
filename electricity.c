#include<stdio.h>
int main(){
    int units,bill;
    printf("Enter number your current electricity units:");
    scanf("%d",&units);

    if(units <= 100)
    {
    bill = units*5;
     printf("electricity bill:%dRs\n",bill);
    } 
    else if (units <= 200)
     {
       bill = 500 + (units-100)*7;
      printf("electricity bill:%dRs\n",bill);
    } 
     else if (units <= 300)
     {
        bill = 1200+ (units-200)*10;
        printf("electricity bill:%dRs\n"bill);
    } 
    else
     {
       bill = 2200 + (units-300)*12;
        printf("electricity bill:%dRs\n",bill);
    }
    return 0;
}