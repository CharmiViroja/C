#include<stdio.h>
int main()
{
   int a,b,sum,sub,multi;
   float divison,modulo;
   printf("Enter of value a:");
   scanf("%d",&a);
   printf("Enter of value b:");
   scanf("%d",&b);
   sum=a+b;
   sub=a-b;
   multi=a*b;
   divison=a/b;
   modulo=a%b;
   printf("Sum=%d\n",sum);
   printf("Substraction=%d\n",sub);
   printf("Multiplication=%d\n",multi);
   printf("Division=%.2f\n",divison);
   printf("modulo=%f",modulo); 
}          

