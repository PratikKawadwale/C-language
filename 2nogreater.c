#include<stdio.h>
int main()
{
   int a,b,*x,*y;
   printf("enter two number");
   scanf("%d%d",&a,&b);
   x=&a;
   y=&b;
   if(*x>*y)
   printf("first number is greater");
   else
   printf("second number is greater");
 }
    