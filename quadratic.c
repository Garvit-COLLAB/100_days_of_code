#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d;
    
    printf("Enter the cofficient of quadratic equation in standard form(ax^2+bx+c):");
    scanf("%f %f %f",&a,&b,&c);
    printf("If the quadratic equation is this:(%.2f)x^2+(%.2f)x+(%.2f)c\nthen\n",a,b,c);

    d =sqrt((b*b)-4*a*c);
     if (d >= 0) {
       if(d > 0){
         printf("The root of this quadratic equation are REAL and DIFFERENT: %.2f %.2f\n",(-b-d)/(2*a),(-b+d)/(2*a));
       } else {
         printf("The root of this quadratic equation are REAL and SAME: %.2f\n",(-b+d)/(2*a));
       }
     }  else {
        printf("The root of this quadratic equation are Complex.\n");
     }
 
    return 0;
    }

