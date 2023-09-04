#include<stdio.h>
int main()
{
int x,n,i,a=1;
printf("enter the base");
scanf("%d",&x);
printf("enter the power");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
 a=a*x;
 }
 printf("base to power =%d",a);
 }
