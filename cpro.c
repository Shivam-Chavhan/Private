#include<stdio.h>
int main(){
    float p,r,t;

    printf("\n Enter the principal amount:");
    scanf("%f",&p);

    printf("\n Enter the rate of interest per year:");
    scanf("%f",&r);

    printf("\n Enter Time");
    scanf("%f",&t);

    printf("The calculated interest is %f",(p*r*t)/100);
    printf("\n principle is %f, rate is %f, time is %f" ,p,r,t);
    return 0;
}