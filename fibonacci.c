#include<stdio.h>
void main()
{
int a=1,b=1,c,i=1,n;
printf("enter the limit");
scanf("%d",&n);
printf("%d \t %d",a,b);
do
{
 c=a+b;
 printf("\t %d",c);
 a=b;
 b=c;
 i++;
 }
 while(i<n-1);
 }
