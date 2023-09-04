#include<stdio.h>
void main()
{
 int x,y;
 printf("enter point");
 scanf("%d%d",&x,&y);
 if(x>0 && y>0)
 printf("first qudrant");
 else
 if(x<0 && y>0) 
 printf("second quadrant");
 else
  if(x<0  && y<0)
  printf("third qudrant" );
  else
  if(x>0  && y<0)
  printf("fourth qudrant");
  }
