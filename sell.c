#include<stdio.h>
int main()
{
 float sp,cp;
 printf("enter cost price");
 scanf("%f",&cp);
 printf("enter selling price");
 scanf("%f",&sp);
 if(sp>cp)
 printf("profit=%f",sp-cp);
 else
 printf("loss =%f",cp-sp);
 }
