//program to calculate simple and compound interest for given principal, rate, and time.


#include<stdio.h>
#include<math.h>

int main(){
    float si,cp,p,r,t;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time in years:");
    scanf("%f",&t);
    si = (p*r*t)/100;
    cp = pow((1 +r / 100), t)*p - p;

    printf("The simple interest is:%.3f\n",si);
    printf("The compound interest is:%.3f\n",cp);

    return 0;
}