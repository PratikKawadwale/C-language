#include<stdio.h>
int main()
{
 int d;
 printf("enter late date");
 scanf("%d",&d);
 if(d>=1 && d<=5)
 printf("fine is %d",d*10);
 else
 if(d>=6 && d<=10)
 printf("fine is %d",d*12);
 else
 printf("fine is %d", d*15);
 }
