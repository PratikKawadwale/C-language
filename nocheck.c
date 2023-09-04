#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter three number");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b&&a<c) || (a<b&&a>c))
 printf("first number is between other two number");
 else
 printf("first number is not between other two number");
 } 
