#include<stdio.h>
int main()
{
    int a,b;
    float x,y;
    printf("enter num of days:");
    scanf("%d",&a);
    x=a/365;
    printf("%f\n",x);
    printf("enter num of years:");
    scanf("%d",&b);
    y=b*365;
    printf("%f",y);
} 