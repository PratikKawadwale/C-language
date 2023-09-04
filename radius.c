#include<stdio.h>
void main()
{
 float a,b,p,area;
  printf("enter inner and outer radius of a ring=");
  scanf("%f%f",&a,&b);
  p=2*3.14*(a+b);
  area=3.14*(a*a-b*b);
  printf("perimeter=%f\n area=%f",p,area);
  }
