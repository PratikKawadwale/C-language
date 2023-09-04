#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter three side");
 scanf("%d%d%d",&a,&b,&c);
 if((a+b>c) || (a+c>b) || (b+c>a))
 printf("tringle is valid");
 else
 printf("tringle is invalid");
 }
