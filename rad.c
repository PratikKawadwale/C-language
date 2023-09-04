#include<stdio.h>
int main()
{
 int ch;
 float r,area, cir , vol;
 printf("menu");
 printf("\n 1 area of circle");
 printf("\n 2 circumference of circle");
 printf("\n 3 volume of sphere");
 printf("\n enter redius ");
 scanf("%f",&r);
 printf("\n enter choice");
 scanf("%d",&ch);
 switch(ch)
 {
  case1:area=3.14*r*r;
          printf("area of circle= %f",area);
         break;
  case2:cir=2*3.14*r;
         printf("circumfernce of circle=%f",cir);
          break;
  case3:vol=4/3*3.14*r*r;
          printf("volume of the sphere is=%f",vol);
          break;
  default:printf("invalid choice");
          break;
  }
}
                         
