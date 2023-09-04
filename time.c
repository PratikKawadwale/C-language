#include<stdio.h>
void main()
{
 int h,m,s;
 printf("enter time in hour");
 scanf("%d",&h);
 printf("enter time in minute");
 scanf("%d",&m);
 printf("enter time in seconds");
 scanf("%d",&s);
 if((h>=0 && h<=24) && (m>=0 && m<=60) && (s>=0 && s<=60))
 printf("time is valid");
 else
 printf("time is invalid");
 }
