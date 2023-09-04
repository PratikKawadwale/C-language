#include<stdio.h>
int main()
{
 int x,y,n,ch,t;
 printf("menu");
 printf("\n1.equality");
 printf("\n2.lessthan");
  printf("\n3.quotient and remainder"); 
 printf("\n4.range");
  printf("\n5.swap");
   printf("\n enter first number");
  scanf("%d",&x);
  printf("\n enter second number"); 
  scanf("%d",&y);
  printf("enter choice");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1: if(x==y)
  printf("equal");
  else
  printf("not equal");
  break;
  case 2:if(x<y)printf("x is lessthan y");else
  printf("x is not less than y");
  break;
  case 3: printf("quotient:%d \n remainder:%d",x/y,x%y);
  break;
  case 4:printf("enter number");
  scanf("%d",&n);
  if(n>=x && n<=y)
  printf("between");
  else
  printf("not between");
  break;
  case 5: t=x;
  x=y;
  y=t;
  printf("after sawp x=%d\ny:%d",x,y);
  default :printf("invalid choice");
  }
  }
