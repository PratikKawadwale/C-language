#include<stdio.h>
void main()
{
 float l,b,h,a,v;
 printf("enter,length,breath,hight");
 scanf("%f%f%f",&l,&b,&h);
 a=l*b+l*h+b*h;
 v=l*b*h;
 printf("surface area=%f\n voloumn=%f",a,v);
 }
