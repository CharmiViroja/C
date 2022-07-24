#include<stdio.h>
int main()
{
    float p,r,t;
    
    printf("enter principle amount:");
    scanf("%f",&p);
    printf("enter interest rate:");
    scanf("%f",&r);
    printf("enter loan period:");
    scanf("%f",&t);
    printf("Simple interest:%f",(p*r*t)/100);
}