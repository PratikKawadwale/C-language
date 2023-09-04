#include<stdio.h>
int main()
{
int d,n;
printf("enter the number =");
scanf("%d",&n);
while(n>0)
{
 d=n%10;
 printf("%d",d);
 n=n/10;
 }
 }
