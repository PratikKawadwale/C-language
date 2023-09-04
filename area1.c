#include<stdio.h>
int main()
{
 int ch;
 float l,b,h,area;
 printf("menu");
 printf("\n1 area of square");
 printf("\n2 area of ractriangle");
 printf("\n3 area of triangle");
 printf("\nenter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: printf("enter length");
          scanf("%f",&l);
          area :l*l;
          printf("area of square=%f",area);
          break;
  case 2: printf("enter length");
          scanf("%f",&l);
          printf("enter breath ");
          scanf("%f",&b);
          area :l*b;
          printf("area of rectangle=%f",area);
          break;        
  case 3: printf("enter breath ");
          scanf("%f",&b);
          printf("enter hight");
          scanf("%f",&h);
          area :0.5*b*h;
          printf("area of triangle=%f",area);
          break;                
  default:printf("invalid choice");
           break;        
  }
  }         
