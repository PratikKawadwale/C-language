#include<stdio.h>
int main()
{
int a,n,c=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
 a=n%10;
 n=n/10;
 c++;
 }
 printf("total digit is number =%d",c);
 }
