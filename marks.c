#include<stdio.h>
int main()
{
 int a,b,c, t;
 float percentage;
 printf("enter first subject marks");
 scanf("%d",&a);
 printf("enter second subject marks");
 scanf("%d",&b);
 printf("enter third subject marks");
 scanf("%d",&b);
 t=a+b+c;
 printf("total marks=%d",t);
 percentage=t/3;
 printf("percentage obitain=%f",percentage);
 if(percentage>=70 && percentage<=100)
 printf("distinction");
 else
 if(percentage>=60 && percentage<=70)
 printf("first class obtain");
 else
 if(percentage>=50 && percentage<60)
 printf("second class obtain");
else
 if(percentage>=40 && percentage<50)
 printf("pass");
 else
 printf("fail");
 }
