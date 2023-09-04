//accept the x and  y coordinates of two points a computs the distance between the two points 
#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,d,x1,x2,y1,y2;
 printf("enter x coordinates");
 scanf("%f%f",&x1,&x2);
 printf("\n enter y coordinates");
 scanf("%f%f",&y1,&y2);
 a=(x2-x1)*(x2-x1);
 b=(y2-y1)*(y2-y1);
 d= sqrt(a+b);
 printf("\n enter distance =%f",d);
 }
