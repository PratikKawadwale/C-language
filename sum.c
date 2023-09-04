#include<stdio.h>
void main()
{
int x,s=0,y=1,i=1,n;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the limit");
scanf("%d",&n);
while(i<=n)
{
 s=s+(y+x);
 y=y+2;
 i++;
 }
 printf("display series=%d",s);
 }
