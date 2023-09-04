#include<stdio.h>
void main()
{
 float s;
 printf("enter basic salary");
 scanf("%f",&s);
 if(s<150000)
 printf("\n tax=%f ",s*0);
 else
  if(s>150000 && s<300000)
  printf("\n tax= %f",s*0.20);
  else 
  if(s>300000)
  printf("\n tax=%f",s*0.30);
  }
